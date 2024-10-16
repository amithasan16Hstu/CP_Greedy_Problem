#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;

        int segments = 1; 
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i-1]) {
                segments++;
            }
        }

       
        if (b >= 0) {
            cout << (a * n + b * n) << endl; 
        } else {
            
            cout << (a * n + b * (segments / 2 + 1)) << endl;
        }
    }

    return 0;
}
