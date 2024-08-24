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
const ll p = 1e14;
int w, h, n;
bool check(ll x)
{
    // cout << "x = " << x << '\n';
    ll a = x / w;
    ll b = x / h;
    return a >= (double)n / b;
}
int32_t main()
{
    MTK;
    cin >> w >> h >> n;
    ll l = 1, r = p, ans;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid))
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