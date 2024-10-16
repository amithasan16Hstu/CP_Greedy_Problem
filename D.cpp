#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   for (int j = 0; j < t; j++)
   {
      int n, k;
      cin >> n >> k;
      string s;
      cin >> s;

      int operations = 0;
      int i = 0;

      while (i < n)
      {
         if (s[i] == 'B')
         {
            operations++;
            i += k;
         }
         else
         {
            i++;
         }
      }

      cout << operations << endl;
   }
   return 0;
}
