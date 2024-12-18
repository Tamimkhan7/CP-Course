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
const int N = 2e5 + 9;
int n, t, a[N];
bool f(ll x)
{
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += x / a[i];
        if (sum >= t)
            return true;
    }

    return sum >= t;
}
int32_t main()
{
    MTK;
    cin >> n >> t;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll l = 0, r = LLONG_MAX, ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
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