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
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        cout << "Case " << ++cs << ": ";
        ll n;
        cin >> n;

        if (n & 1)
        {
            cout << "Impossible" << '\n';
            continue;
        }
        ll x = 1;
        while (n % 2 == 0)
        {
            x *= 2;
            n /= 2;
        }
        cout << n << ' ' << x << '\n';
    }

    return 0;
}
