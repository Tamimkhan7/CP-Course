#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    o_set<int> se;
    for (int i = 0; i < n; i++)
    {
        se.insert(v[i]);
        int ans = se.size() - se.order_of_key(v[i] + 1);
        cout << ans << ' ';
    }

    return 0;
}
