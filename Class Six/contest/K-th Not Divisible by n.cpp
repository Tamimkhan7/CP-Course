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
int n, k;
bool f(int x)
{
    int ans = x - x / n;
    return ans >= k;
}
void solve()
{
    cin >> n >> k;
    int l = 1, r = 2e9, ans = 0;
    while (l <= r)
    {
        int mid = (1LL * l + r) / 2;
        if (f(mid))
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