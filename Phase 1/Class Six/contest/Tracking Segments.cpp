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
const int N = 2e5 + 9;
int n, m, q, l[N], r[N], x[N];

bool ok(int k)
{
    int a[n + 1] = {};
    for (int i = 1; i <= k; i++)
        a[x[i]] = 1; // x[i] jei value ta oi array oi position ta 1 kore dew ai vabe continue koro
                     // ar por prefix sum koro
    for (int i = 1; i <= n; i++)
        a[i] += a[i - 1];
    // for (int i = 1; i <= n; i++)
    //     cout << a[i] << ' ';
    // cout << '\n';
    for (int i = 1; i <= m; i++)
    {
        int cnt = a[r[i]] - a[l[i] - 1];
        int len = r[i] - l[i] + 1;
        if (len / 2 + 1 <= cnt)
            return true;
    }
    return false;
}
void solve()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        cin >> l[i] >> r[i];
    cin >> q;
    for (int i = 1; i <= q; i++)
        cin >> x[i];
    // binary search on answer
    int l = 1, r = q, ans = -1;
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
    return 0;
}
