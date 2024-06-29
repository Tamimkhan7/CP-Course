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

ll power(ll x, ll n, ll mod)
{
    ll ans = 1 % mod;
    while (n > 0)
    {
        if (n & 1)
            ans = (__int128)ans * x % mod;
        x = (__int128)x * x % mod;
        n >>= 1;
    }
    return ans;
}
int32_t main()
{
    MTK;
    ll b, p, m;
    while (cin >> b >> p >> m)
        cout << power(b, p, m) << '\n';

    return 0;
}