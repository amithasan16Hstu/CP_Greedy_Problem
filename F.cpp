#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long t;
   cin >> t;

   while (t--)
   {
      long long n, steps = 0;
      cin >> n;

      while (true)
      {

         if ((n % 2 != 0 && n % 3 != 0 && n % 5 != 0) || n == 1)
            break;

         if (n % 2 == 0)
            n /= 2;
         else if (n % 3 == 0)
            n = (2 * n) / 3;
         else if (n % 5 == 0)
            n = (4 * n) / 5;

         steps++;
         if ((n % 2 != 0 && n % 3 != 0 && n % 5 != 0) || n == 1)
            break;
      }

      if (n == 1)
         cout << steps;
      else
         cout << -1;

      cout << "\n";
   }

   return 0;
}
