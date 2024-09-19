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

int power2(int x, int n)
{
    int ans = 1 % mod;
    while (n > 0)
    {
        if (n & 1)
            ans = 1LL * ans * x % mod;
        x = 1LL * x * x % mod;
        n >>= 1;
    }
    return ans;
}

ll power(ll x, ll n)
{
    ll ans = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            ans *= x;
        }
        x *= x;
        n >>= 1;
    }
    return ans;
}

int32_t main()
{
    MTK;
    int n, m, t;
    while (cin >> n >> m >> t)
    {
        if (n == 0 and m == 0 and t == 0)
            break;
        cout << power2(n, m) << '\n';
    }
    return 0;
}