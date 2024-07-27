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
    ll l, r;
    cin >> l >> r;
    if (l == r) // sob gula bit ai jodi match kore tahole amar maximum value hobe 0 ai, a^a=0;
        cout << 0 << '\n';
    else
    {
        for (int i = 60; i >= 0; i--) // jehetu l....r holo 1e18 tai tar bit 60 ar besi hobe na
        {
            int l_bit = (l >> i) & 1;
            int r_bit = (r >> i) & 1;
            if (l_bit != r_bit) // first mismatch bit ta khujteci, tar por baki bit gula 1 kore dicci
            {
                cout << (1LL << (i + 1)) - 1 << '\n';
                return 0;
            }
        }
    }
    return 0;
}