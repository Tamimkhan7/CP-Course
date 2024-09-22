
/*problem holo == n*m==w jekhane n holo even and m holo odd*/

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
        ll w;
        cin >> w;

        if (w % 2 == 1) // mane holo m ke 2 banano possible na,,karon amra jani prime ar even value holo only 2 others all value are odd
        {
            cout << "Impossible" << '\n';
            continue;
        }
        ll m = 1;
        while (w % 2 == 0)
        {
            m *= 2;
            w /= 2;
        }
        ll n = w;
        cout << n << ' ' << m << '\n';
    }

    return 0;
}
