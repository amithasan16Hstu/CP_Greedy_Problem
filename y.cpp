#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, n, x;
    cin >> T;

    while (T--)
    {
        set<int> uniqueElements;
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            uniqueElements.insert(x);
        }

        for (int i = 1; i <= n; i++)
        
            cout << max((int)uniqueElements.size(), i) << " ";
        
        cout << endl;
    }

    return 0;
}
