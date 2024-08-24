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
vector<int> a(N);
int n, t;
bool f(ll x)
{
    ll sum = 0;
    for (int i = 1; i <= n; i++)
        sum += a[i] / x;

    return sum >= t;
}
int32_t main()
{
    MTK;
    cin >> n >> t;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int mx = *max_element(all(a));
    sort(a +, a + n + 1);
    int l = 1, r = 2e5, ans = -1;
    // while (l < r)
    // {
    //     ll mid = (l + r) / 2;
    //     if (f(mid))
    //     {
    //         r = mid - 1;
    //         ans = mid;
    //     }
    //     else
    //         l = mid + 1;
    // }
    cout << ans << '\n';
}