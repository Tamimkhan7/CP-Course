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
#define mod 10000007

ll power(int x, int n)
{
    ll ans = 1 % mod;
    while (n > 0)
    {
        if (n & 1)
            ans = 1LL * ans * x % mod;
        x = 1LL * x * x % mod;
        n >>= 1;
    }
    return ans;
}
int32_t main()
{
    MTK;
    int n, k;
    while (cin >> n >> k)
    {
        if (n == 0 and k == 0)
            break;
        ll s[n + 1], p[n + 1], z[n + 1];
        for (int i = 1; i <= n; i++)
            s[i] = 1LL * power(i, k) % mod;

        for (int i = 1; i <= n; i++)
            p[i] = 1LL * power(i, i) % mod;
        for (int i = 1; i <= n; i++)
            z[i] = (s[i] + p[i]) % mod;

        ll ans = z[n] + z[n - 1] % mod - (2 * z[n - 2]) % mod;
        cout << ans << '\n';
    }
    return 0;
}