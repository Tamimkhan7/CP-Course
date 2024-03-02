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
void solve()
{
    ll n, c;
    cin >> n >> c;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v));
    ll ans = v[0], cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if ((v[i] - ans) >= c)
        {
            cnt++;    
            ans = v[i];
        }
    }
    cout << cnt << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}