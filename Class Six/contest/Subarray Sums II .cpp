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
int32_t main()
{
    MTK;
    int n, x;
    cin >> n >> x;
    ll a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    ll sum = 0, ans = 0;
    map<ll, ll> mp;
    for (int i = 1; i <= n; i++)
    {
        sum += a[i];
        if (sum == x)
            ans++;
        if (mp.count(sum - x))
            ans += mp[sum - x];

        mp[sum]++;
    }
    cout << ans << '\n';
}
// ll ans = 0, sum = 0;
// unordered_map<ll, int> prefixsum;
// prefixsum[0] = 1;
// for (int i = 1; i <= n; i++)
// {
//     sum += a[i];
//     ans += prefixsum[sum - x];
//     prefixsum[sum]++;
// }
// cout << ans << '\n';
// }