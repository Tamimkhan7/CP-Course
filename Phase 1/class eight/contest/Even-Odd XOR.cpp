#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    ll t, n, res = ((1 << 31) - 1);
    cin >> t;
    while (t--)
    {
        cin >> n;
        int temp = 0;
        int x = 0, i = 1;
        while (x < n - 2)
        {
            if ((temp ^ i) == 0)
                i++;
            cout << i << ' ';
            temp ^= i;
            i++, x++;
        }
        cout << (res ^ temp) << ' ' << res << '\n';
    }
    return 0;
}