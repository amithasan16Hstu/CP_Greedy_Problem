#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
         int a, b, c;
    cin >> a >> b >> c;
    
    int max_bananas = 0;
    
    for (int x = 0; x <= 5; x++) {
        for (int y = 0; y <= 5 - x; y++) {
            int z = 5 - x - y;
            int new_a = a + x;
            int new_b = b + y;
            int new_c = c + z;
            max_bananas = max(max_bananas, new_a * new_b * new_c);
        }
    }
    
    cout << max_bananas << endl;
    }
    return 0;
}
