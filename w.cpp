#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    string s;
    cin >> t;

    while (t--) {
        cin >> n >> s;

        int max_streak = 1, current_streak = 1;

        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) 
                current_streak++;  
             else 
                current_streak = 1;  
            max_streak = max(max_streak, current_streak);  
        }

        cout << max_streak + 1 << endl;  
    }

    return 0;
}
