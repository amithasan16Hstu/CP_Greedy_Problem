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
        
        int x = a[n-1];  
        int operations = 0;
        int current_max = x; 
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] > current_max) {
                operations++;  
                current_max = a[i];  
            }
        }
        
        cout << operations << endl;
    }
    
    return 0;
}
