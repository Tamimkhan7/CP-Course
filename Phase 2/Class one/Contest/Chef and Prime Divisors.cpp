#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        while (1)
        {
            ll g = __gcd(a, b);
            cout << g << ' ';
            if (g == 1)
                break;
            b /= g;
        }
        cout << '\n';
        if (b == 1)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    return 0;
}
