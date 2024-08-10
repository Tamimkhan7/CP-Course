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
// string ok(int n)
// {
//     string ans = "";
//     while (n > 0)
//     {
//         ans += to_string(n % 2);
//         n /= 2;
//     }
//     return ans;
// }
void solve()
{
    ll l, r;
    cin >> l >> r;
    ll ans = 1, res;
    while (l <= r)
    {
        res = l;
        l |= ans;
        ans = ans << 1;
        // cout << res << ' ' << l << ' ' << ans << '\n';
    }
    cout << res << '\n';

    // if (r == 0)
    // {
    //     cout << 0 << '\n';
    //     return;
    // }
    // if (r == 1 || l == 1 and r == 2)
    // {
    //     cout << 1 << '\n';
    //     return;
    // }
    // if (l == 2 and r == 2)
    // {
    //     cout << 2 << '\n';
    //     return;
    // }
    // if (r >= 3 and l>)
    // {
    // for (ll i = l; i <= r; i++)
    // {
    //     ll cnt = __builtin_popcount(i);
    //     string s = ok(i);
    //     // cout << cnt << ' ';
    //     if (cnt > ans)
    //     {
    //         res = i;
    //         ans = cnt;
    //     }
    //     if (cnt == s.size())
    //         i *= 2;
    // }
    // cout << res << '\n';
}
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    while (n--)
        solve();
    return 0;
}