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
int n, k, a[N];
void solve()
{
    int l, r;
    cin >> l >> r;
    auto it = lower_bound(a, a + n, l);
    auto it2 = upper_bound(a, a + n, r);
    // cout << it - a << ' ' << it2 - a << '\n';
    cout << it2 - it << ' ';
}
int32_t main()
{
    MTK;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int k;
    cin >> k;
    while (k--)
        solve();
}