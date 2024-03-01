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
    int x;
    cin >> x;
    auto it = lower_bound(a, a + n, x) - a;
    cout << it + 1 << '\n';
}
int32_t main()
{
    MTK;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (k--)
        solve();
}