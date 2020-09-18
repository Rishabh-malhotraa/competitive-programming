/*
   greedy
   difficulty: easy
   date: 02/Mar/2020 
   by: @brpapa
*/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
   int N; cin >> N;
   vector<int> A(N); for (int &a : A) cin >> a;
   sort(A.begin(), A.end());

   cout << A[(N-1)/2] << endl;
   return 0;
}