#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
const int N = 1e5 + 9;
int a[N], n, h;
bool ok(int x)
{
    // both ans are correct
    ll ans = 0; // be safe as far result
    for (int i = 1; i <= n; i++)
    {
        //     if (a[i] <= x)
        //         ans++;
        //     else
        //     {
        //         if (a[i] / x != 0)
        //             ans += (a[i] / x) + 1;
        //         else
        //             ans += a[i] / x;
        //     }
        // both are correct equation
        // ans += ceil((double)a[i] / x);
        // ai khane oh ceill kora hocce but formular angle a, that's why ai vabe kora better double ignore korar jonno
        ans += (a[i] + x - 1) / x;
    }
    // cout << x << ' ' << ans << '\n';
    return ans <= h;
}
void solve()
{
    cin >> n >> h;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int l = 1, r = 1e9, ans = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}
