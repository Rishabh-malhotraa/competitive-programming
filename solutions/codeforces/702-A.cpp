/*
   greedy > maximum subsequence
   difficulty: none
   date: none 
   by: @brpapa
*/
#include <iostream>
using namespace std;

int main() {
   int n, atual, ant = 0, maxAtual = 0, maxTotal = 1;

   scanf("%d", &n);
   for (int i = 0; i < n; i++) {
      scanf("%d", &atual);
      if (atual > ant) {
         maxAtual++;
         if (maxAtual > maxTotal)
            maxTotal = maxAtual;
      } else
         maxAtual = 1;

      ant = atual;
   }
   printf("%d\n", maxTotal);
   return 0;
}