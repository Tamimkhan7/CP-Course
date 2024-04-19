#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
const int N = 1e5 + 9;
int n, c, a[N];
bool ok(int x)
{
    int ans = a[1], cnt = 1;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] - ans >= x)
        {
            cnt++;
            ans = a[i];
        }
    }
    return cnt >= c;
}
void solve()
{
    cin >> n >> c;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    int l = 1, r = 1e9, ans = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        // cout << mid << '\n';
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
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