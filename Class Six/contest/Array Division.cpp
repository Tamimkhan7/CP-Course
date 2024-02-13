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
const int N = 2e5 + 9;
int a[N];
bool f(ll x)
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > x)
            return false;
    }
    int min_subarray = 1;
    ll current_sum = a[1];
    for (int i = 2; i <= n; i++)
    {
        if (current_sum + a[i] <= x)
            current_sum += a[i];
        else
        {
            min_subarray++;
            current_sum = a[i];
        }
    }
    return min_subarray <= k;
}
int32_t main()
{
    MTK;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    ll l = 0, r = 2e14, ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (f(mid))
        {
            ans = mid;
            cout << ans << '\n';
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << '\n';
}