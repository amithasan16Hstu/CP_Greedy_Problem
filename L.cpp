#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n), b(n);
    int k = 0, l = 0;

    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

  
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (b[i] != a[i]) {
            k += a[i];  
            l += b[i];  
        }
    }

   
    if (k == 0 || l == n) {
        cout << -1 << endl;
    } else {
        cout << l / k + 1 << endl;
    }

    return 0;
}
