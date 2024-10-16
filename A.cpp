#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        int n; 
        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        
        int current = 1;
        for (int i = 0; i < n; i++) {
            
            if (current == a[i]) current++;
            b[i] = current;
            current++;
        }

        cout << b[n-1] << endl;
    }

    return 0;
}
