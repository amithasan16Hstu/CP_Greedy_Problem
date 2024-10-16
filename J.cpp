#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159265359

signed main()
{

   long long t = 1;
   cin >> t;
   for (long long i = 1; i <= t; i++)
   {
      long long n, k;
      cin >> n >> k;

      vector<long long> a(k);
      for (long long i = 0; i < k; i++)
      {
         cin >> a[i];
      }

      sort(a.rbegin(), a.rend());

      long long ans = 0;
      for (long long i = 1; i < k; i++)
      {
         ans += a[i];
         ans += a[i] - 1;
      }

      cout << ans << "\n";
   }
   return 0;
}
