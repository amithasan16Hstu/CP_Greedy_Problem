#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 
        vector<int> array(n);

        
        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }

        int count = 0; 
        bool inSegment = false; 
        for (int i = 0; i < n; i++) {
            if (array[i] != 0) {
                if (!inSegment) {
                    count++; 
                    inSegment = true;
                }
            } else {
                inSegment = false; 
            }
        }

        
        if (count >= 2) {
            cout << "2" << endl;
        } else {
            cout << count++ << endl; 
        }
    }

    return 0;
}
