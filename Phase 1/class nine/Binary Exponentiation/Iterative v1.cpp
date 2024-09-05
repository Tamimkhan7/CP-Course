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

ll power(int x, ll n, int mod)
{
    vector<int> pw(60, 0);
    pw[0] = x % mod;
    for (int i = 1; i <= 60; i++)
    {
        // x ^ (2 ^ i) = x ^ (2 ^ i - 1) * x ^ (2 ^ i - 1);
        pw[i] = 1LL * pw[i - 1] * pw[i - 1] % mod;
    }
    int ans = 1 % mod;
    for (int i = 0; i <= 60; i++)
    {
        if (n >> i & 1)
            ans = 1LL * ans * pw[i] % mod;
    }
    return ans;
}
int32_t main()
{
    MTK;
    ll x = 1e9, n = 1e18, m = 1e9 + 7;
    cout << power(x, n, m) << '\n';
    return 0;
}