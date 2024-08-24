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
int n, a[N];
ll s;
bool f(int x)
{
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        ll ans = a[i] / x;
        sum += ans;
        // cout << ans << ' ';
    }
    // cout << '\n';
    // cout << x << ' ' << sum << '\n';
    return sum >= s;
}
int32_t main()
{
    MTK;
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int l = 1, r = 1e9, ans = -1;
    while (r >= l)
    {
        int mid = (l + r) / 2;
        if (f(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << '\n';
}