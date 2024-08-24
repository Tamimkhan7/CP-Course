#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define llu unsigned long long
#define ll unsigned __int128

llu power(ll x, llu n, ll mod)
{
    llu ans = 1 % mod;
    while (n > 0)
    {
        if (n & 1)
            ans = ans * x % mod;
        x = x * x % mod;
        n >>= 1;
    }
    return ans;
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        unsigned a, b;
        string s;
        cin >> a >> b >> s;
        ll m = 0;
        for (auto i : s)
            m = ((m * 10) + (i - '0'));
        cout << power(a, b, m) << '\n';
    }

    return 0;
}