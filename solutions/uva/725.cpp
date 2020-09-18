/*
   brute force > iterative
   difficulty: easy
   date: 11/Jan/2020 
   by: @brpapa
*/
#include <cstdio>
#define setBit(S, i) (S |= (1 << i))
#define setAll(n) ((1 << n) - 1)
using namespace std;

int main() {
   int N, T = 0;
   while (1) {
      scanf("%d", &N); if (N == 0) break;
      if (T++ != 0) printf("\n");

      bool found = false;
      for (int den = 1234; den*N <= 98765; den++) {
         int num = den * N;

         int mask;             // conjunto de bits {9, ..., 0}
         mask = (den < 10000); // se tem 0 à esquerda

         for (int tmp = num; tmp > 0; tmp /= 10) setBit(mask, tmp % 10);
         for (int tmp = den; tmp > 0; tmp /= 10) setBit(mask, tmp % 10);

         if (mask == setAll(10)) { // todos os 9 bits foram ligados
            printf("%.5d / %.5d = %d\n", num, den, N);
            found = true;
         }
      }
      if (!found) printf("There are no solutions for %d.\n", N);
   }
   return 0;
}