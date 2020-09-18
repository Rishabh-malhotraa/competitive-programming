/*
   math > number theory
   difficulty: none
   date: none 
   by: @brpapa
*/
#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int main() {
   int n, qte = 0;
   cin >> n;

   for (int k = 1; k <= sqrt(n); k++)
      for (int i = k; i * k <= n; i++)
         qte++;

   cout << qte << endl;
   return 0;
}