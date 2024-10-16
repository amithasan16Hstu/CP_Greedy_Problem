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
        
        int max_diff = a[n - 1] - a[0];
        
       
        for (int i = 1; i < n; i++) {
            max_diff = max(max_diff, a[i] - a[0]);  
        }
        
       
        for (int i = 0; i < n - 1; i++) {
            max_diff = max(max_diff, a[n - 1] - a[i]);  
        }
        
       
        for (int i = 0; i < n - 1; i++) {
            max_diff = max(max_diff, a[i] - a[i + 1]);
        }
        
        cout << max_diff << endl;
    }
    
    return 0;
}
