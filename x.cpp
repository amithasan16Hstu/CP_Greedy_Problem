#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) {
        int n, k;
        cin >> n >> k;  

        vector<int> a(n), b(n);
        vector<pair<int, int>> a_with_index(n);

       
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a_with_index[i] = {a[i], i};  
        }

        
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

       
        sort(a_with_index.begin(), a_with_index.end());
        sort(b.begin(), b.end());

       
        vector<int> result(n);

       
        for (int i = 0; i < n; i++) {
            int original_index = a_with_index[i].second;
            result[original_index] = b[i];  
        }

        
        for (int i = 0; i < n; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
