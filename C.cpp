#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;

       
        int total_diff = y - x;

      
        int min_diff = (n * (n - 1)) / 2;

       
        if (total_diff < min_diff) {
            cout << -1 << endl;
        } else {
            vector<int> a(n);
            a[n-1] = y;

            int remaining_diff = total_diff;
            for (int i = n - 2; i >= 0; --i) {
                int diff = min(remaining_diff - (i * (i + 1)) / 2, n - 1 - i);
                a[i] = a[i + 1] - diff;
                remaining_diff -= diff;
            }

           
            a[0] = x;

            for (int i = 0; i < n; ++i) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
