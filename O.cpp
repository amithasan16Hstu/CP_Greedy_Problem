#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n, m;
   cin >> n >> m;

   vector<int> puzzles(m);

   for (int i = 0; i < m; i++)
   {
      cin >> puzzles[i];
   }

   sort(puzzles.begin(), puzzles.end());

   int min_diff = 10000;
   for (int i = 0; i <= m - n; i++)
   {
      int current_diff = puzzles[i + n - 1] - puzzles[i];
      min_diff = min(min_diff, current_diff);
   }

   cout << min_diff << endl;

   return 0;
}
