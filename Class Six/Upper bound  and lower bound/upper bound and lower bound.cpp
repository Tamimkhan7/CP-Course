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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v));
    for (auto x : v)
        cout << x << ' ';
    cout << '\n';
    auto it = lower_bound(all(v), x);
    auto it1 = upper_bound(all(v), x);
    cout << *it << '\n';             // lower_bound value
    cout << *it1 << '\n';            // upper_bound value
    cout << it - v.begin() << '\n';  // lower_bound size
    cout << it1 - v.begin() << '\n'; // upper_bound size
    cout << it1 - it << '\n';        // total distance lowe bound to upper bound
}