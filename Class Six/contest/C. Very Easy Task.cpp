#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) x.begin(), x.end()
typedef long long int ll;
#define mod 1000000007
const int p = 2e9;
int x, y, n;
bool ok(int t)
{
    if (x > y)
        swap(x, y);
    ll ans = 0;
    if (t >= x)
    {ans=1;
        t -= x;
        ans += (t / x);
        ans += (t / y);
    }
    return ans >= n;
}
int32_t main()
{
    MTK;
    cin >> n >> x >> y;
    int l = 1, r = p, ans;
    while (l <= r)
    {
        ll mid = (1LL * l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << '\n';

    return 0;
}