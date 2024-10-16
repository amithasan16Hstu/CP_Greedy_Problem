#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   string s;
   cin >> s;

   int count_0 = 0, count_1 = 0;

   for (char c : s)
   {
      if (c == '0')
         count_0++;
      else
         count_1++;
   }

   cout << abs(count_0 - count_1) << endl;

   return 0;
}
