#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll n;
        str s, S;
        cin >> n >> s;

        int p = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (p != 1)
                {
                    S += '1';
                    p = 1;
                }
                else
                {
                    S += '0';
                    p = 0;
                }
            }
            if (s[i] == '1')
            {
                if (p != 2)
                {
                    S += '1';
                    p = 2;
                }
                else
                {
                    S += '0';
                    p = 1;
                }
            }
        }

        cout << S << endl;
    }

    return 0;
}
