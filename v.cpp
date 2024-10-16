#include <bits/stdc++.h>

using namespace std;

int main() {
    
    freopen("outofplace.in", "r", stdin);
    freopen("outofplace.out", "w", stdout);

    int N;
    cin >> N;  

    vector<int> cows(N);
    for (int i = 0; i < N; i++) {
        cin >> cows[i];  
    }

   
    vector<int> sortedCows = cows;
    sort(sortedCows.begin(), sortedCows.end());

    
    int outOfPlace = 0;
    for (int i = 0; i < N; i++) {
        if (cows[i] != sortedCows[i]) {
            outOfPlace++;
        }
    }

   
    cout << (outOfPlace > 0 ? outOfPlace - 1 : 0) << endl;

    return 0;
}
