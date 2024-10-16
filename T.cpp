#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
      int n, k;
        cin >> n >> k;
        int key = 1; 
        for (int i = 1; i <= n; ++i) {
            int x;
            cin >> x;
            if (x == key) {
                key++; 
            }
        }

        cout << (n - key + k) / k << endl;
    }

    return 0;
}
