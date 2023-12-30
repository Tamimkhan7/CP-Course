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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    ll ans = 0;
    for (auto [x, y] : mp)
    {
        ans += (n - y) * y;
        n -= y;
    }
    cout << ans << '\n';
}