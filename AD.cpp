#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
       
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int operations = 0;
      
        for (int i = 1; i < n - 1; i++) {
            if (a[i] > a[i-1] && a[i] > a[i+1]) {
                
                if (i + 2 < n) {
                    a[i+1] = max(a[i], a[i+2]);
                } else {
                    a[i+1] = a[i];
                }
                operations++;
            }
        }

      
        cout << operations << endl;
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
