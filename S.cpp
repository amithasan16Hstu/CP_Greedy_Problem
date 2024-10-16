#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;

   while (t--)
   {
      int c1, c2, c3, a1, a2, a3, a4, a5;
      cin >> c1 >> c2 >> c3;
      cin >> a1 >> a2 >> a3 >> a4 >> a5;

      c1 -= a1;
      c2 -= a2;
      c3 -= a3;

      if (c1 < 0 || c2 < 0 || c3 < 0)
      {
         cout << "NO" << endl;
         continue;
      }

      int remaining_c1 = c1, remaining_c2 = c2;

      if (a4 <= remaining_c1)
      {
         remaining_c1 -= a4;
      }
      else
      {
         a4 -= remaining_c1;
         c3 -= a4;
      }

      if (a5 <= remaining_c2)
      {
         remaining_c2 -= a5;
      }
      else
      {
         a5 -= remaining_c2;
         c3 -= a5;
      }

      if (c3 >= 0)
      {
         cout << "YES" << endl;
      }
      else
      {
         cout << "NO" << endl;
      }
   }

   return 0;
}
