#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;

   int total_cost = 0;
   int min_price = 1001;

   for (int i = 0; i < n; i++)
   {
      int ai, pi;
      cin >> ai >> pi;
      if (pi < min_price)
      {
         min_price = pi;
      }

      total_cost += ai * min_price;
   }

   cout << total_cost << endl;
   return 0;
}
