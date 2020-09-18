/*
   dynamic programming
   difficulty: medium
   date: 29/Jan/2020 
   by: @brpapa
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int N, K, M; // unidades, barras, tamanho máximo de cada barra

ll memo[55][55][55];
ll dp(int n, int k, int m) {
   // n-ésima unidade, k-ésima barra, m-ésima unidade da barra k

   if (n < N && (m == M || k == K)) return 0; // inválido
   if (n == N) return k == K;                 // válido apenas se o k excedeu

   ll &ans = memo[n][k][m];
   if (ans != -1) return ans;

   return ans = dp(n+1, k, m+1) + dp(n+1, k+1, 0);
}

int main() {
   while (cin >> N >> K >> M) {
      memset(memo, -1, sizeof memo);
      cout << dp(0, 0, 0) << endl;
   }
   return 0;
}