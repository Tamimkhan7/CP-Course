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
ll mulmod(ll x, ll y, ll m)
{
    x %= m;
    ll ans = 0;
    while (y > 0)
    {
        if (y & 1)
            ans = (ans + x) % m;
        x = (x + x) % m;
        y >>= 1;
    }
    return ans;
}
int32_t main()
{
    MTK;
    ll m = (ll)1e18 + 7;
    ll x = 1e18, y = 1e18;
    cout << mulmod(x, y, m) << '\n';
    return 0;
}