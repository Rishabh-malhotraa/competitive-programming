/*
   brute force > recursive backtracking
   difficulty: none
   date: none 
   by: @brpapa
*/
#include <iostream>
using namespace std;
#define MAX 101

int pilhaA[MAX], pilhaB[MAX], pilhaC[MAX];
bool toposVrf[MAX][MAX][MAX], ok;

void testaTopos(int topoA, int topoB, int topoC) {
   //verifica se a combinação atual de topos já foi testada
   if (!toposVrf[topoA + 1][topoB + 1][topoC + 1])
      toposVrf[topoA + 1][topoB + 1][topoC + 1] = true;
   else
      return;

   if ((topoA == -1) && (topoB == -1) && (topoC == -1))
      ok = true;

   if ((topoA > -1) && (topoB > -1) && (topoC > -1) && !ok)
      if ((pilhaA[topoA] + pilhaB[topoB] + pilhaC[topoC]) % 3 == 0)
         testaTopos(topoA-1, topoB-1, topoC-1);

   if ((topoA > -1) && (topoB > -1) && !ok)
      if ((pilhaA[topoA] + pilhaB[topoB]) % 3 == 0)
         testaTopos(topoA-1, topoB-1, topoC);

   if ((topoA > -1) && (topoC > -1) && !ok)
      if ((pilhaA[topoA] + pilhaC[topoC]) % 3 == 0)
         testaTopos(topoA-1, topoB, topoC-1);

   if ((topoB > -1) && (topoC > -1) && !ok)
      if ((pilhaB[topoB] + pilhaC[topoC]) % 3 == 0)
         testaTopos(topoA, topoB-1, topoC-1);

   if ((topoA > -1) && !ok)
      if (pilhaA[topoA] % 3 == 0)
         testaTopos(topoA-1, topoB, topoC);

   if ((topoB > -1) && !ok)
      if (pilhaB[topoB] % 3 == 0)
         testaTopos(topoA, topoB-1, topoC);

   if ((topoC > -1) && !ok)
      if (pilhaC[topoC] % 3 == 0)
         testaTopos(topoA, topoB, topoC-1);

}
int main() {
   int n;
   while (true) {
      scanf("%d", &n);
      if (n == 0)
         return 0;
      for (int i = n - 1; i >= 0; i--)
         scanf("%d %d %d", &pilhaA[i], &pilhaB[i], &pilhaC[i]);

      ok = false;
      for (int i = 0; i < n + 1; i++)
         for (int j = 0; j < n + 1; j++)
            for (int k = 0; k < n + 1; k++)
               toposVrf[i][j][k] = false;
      testaTopos(n - 1, n - 1, n - 1);
      printf("%d\n", ok ? 1 : 0);
   }
   return 0;
}