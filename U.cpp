#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;

   while (t--)
   {
      int n;
      string a;
      cin >> n >> a;

      int start = 0, end = n - 1;

      while (end >= 0 && a[end] == 'A')
      {
         end--;
      }

      while (start < a.size() && a[start] == 'B')
      {
         start++;
      }

      int result = max(end - start, 0);
      cout << result << endl;
   }

   return 0;
}
