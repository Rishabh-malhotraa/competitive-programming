/*
   Longest Increasing Subsequence (LIS)
   
   Motivação: encontre o tamanho da maior subsequência crescente em um array A de tamanho N.
*/
#include <bits/stdc++.h>
using namespace std;
const int INF = 1 << 30;

/* input */
vector<int> A; int N;

/* O(N * log(N)) */
int lis0() {
   vector<int> size(N);        // size[j]: tamanho da LIS que termina com A[j]
   vector<int> last(N+1, INF); // last[s]: último elemento da LIS de tamanho s
   last[0] = -INF;

   int biggest_s = 0;

   for (int j = 0; j < N; j++) {
      // busca o menor s tal que last[s] >= A[j]
      int s = lower_bound(last.begin(), last.end(), A[j]) - last.begin();

      // tenta melhorar o último elemento da LIS de tamanho s
      if (A[j] < last[s]) // estritamente crescente
         last[s] = A[j];

      size[j] = s;
      biggest_s = max(biggest_s, s);
   }

   return biggest_s;
}

/* O(N^2) */
int lis1() {
   vector<int> dp(N, 1); // dp[j]: tamanho da LIS que termina com A[j]
   vector<int> p(N, -1); // p[j]: índice i em A do antecessor de A[j] na LIS

   int best_lis_size = 0;
   int best_j = 0;

   for (int j = 0; j < N; j++) {

      // busca por i (i < j), tal que A[i] < A[j] (estritamente crescente)
      for (int i = j-1; i >= 0; i--)
         if (A[i] < A[j])
            if (dp[i]+1 > dp[j]) {
               dp[j] = dp[i]+1, p[j] = i;
               break;
            }

      // atualiza a resposta
      if (best_lis_size < dp[j]) best_lis_size = dp[j], best_j = j;
   }

   return best_lis_size;
}

/* e.g */
int main() {
   N = 7; A = {-7, 10, 5, 2, 3, 8, 1};
   cout << lis0() << endl;
}
