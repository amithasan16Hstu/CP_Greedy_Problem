#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> prices(n);
    

    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    
   
    vector<int> negative_prices;
    for (int i = 0; i < n; i++) {
        if (prices[i] < 0) {
            negative_prices.push_back(prices[i]);
        }
    }
    
   
    sort(negative_prices.begin(), negative_prices.end());
    
   
    int max_money = 0;
    for (int i = 0; i < min(m, (int)negative_prices.size()); i++) {
        max_money += -negative_prices[i]; 
    }
    
   
    cout << max_money << endl;
    
    return 0;
}
