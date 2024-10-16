#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        
        for (int i = 0; i < n - 1 && k > 0; i++) {
            int move = min(a[i], k); 
            a[i] -= move;
            a[n - 1] += move;
            k -= move;
        }
        
        
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
