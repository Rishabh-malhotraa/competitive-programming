/*
   miscellaneous > two pointers
   difficulty: medium
   date: 07/Jan/2020 
   by: @brpapa
*/
#include <iostream>
#include <vector>
using namespace std;

int N, K;
vector<char> str;

int tp(char letter) {
   int maxLength = 0;
   int l = 0, r = 0;
   int k = 0; // atual qte de mudanças gastas em [l .. r)

   for (; l < N; l++) {
      if (l > 0)
         k -= str[l - 1] != letter;

      while (r < N && k <= K)
         if (str[r++] != letter)
            k++;
      if (k > K) {
         r--;
         k--;
      }

      // cout << l << " " << r << endl;
      maxLength = max(maxLength, r - l);
   }
   return maxLength;
}

int main() {
   cin >> N >> K;

   str.resize(N);
   for (char &s : str)
      cin >> s;

   cout << max(tp('a'), tp('b')) << endl;
   return 0;
}