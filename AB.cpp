#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long n, q;
   cin >> n >> q;

   vector<
       long long>
       p(n + 1, 0);
   for (
       long long i = 1; i <= n; i++)
   {
      cin >> p[i];
   }

   sort(p.begin() + 1, p.end());

   for (
       long long i = 1; i <= n; i++)
   {
      p[i] += p[i - 1];
   }

   while (q--)
   {

      long long x, y;
      cin >> x >> y;

      cout << (p[n + y - x] - p[n - x]) << endl;
   }

   return 0;
}
