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

ll mul(ll a, ll b, ll mod)
{
    return __int128_t(a) * b % mod;
}
ll power(ll a, ll b, ll mod)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            ans = mul(ans, a, mod);
        a = mul(a, a, mod);
        b >>= 1;
    }
    return ans;
}
ll inverse(ll a, ll mod)
{
    return power(a, mod - 2, mod);
}
int32_t main()
{
    MTK;
    ll a, b, mod;
    cin >> a >> b >> mod;
    cout << power(a, b, mod) << '\n';
    cout << mul(a, b, mod) << '\n';
    cout << mul(a, inverse(b, mod), mod) << '\n';

    return 0;
}