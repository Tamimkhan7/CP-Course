#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll int long long
const int N = 1e6 + 9;
int a[N], r[N], l[N];

// i<j<k
// a[i]>a[j]>a[k]

int32_t main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    o_set<int> se;
    // a[j]>a[k]// total koyta ace oita ber korteci
    for (int j = n; j >= 1; j--)
    {
        r[j] = se.order_of_key(a[j]);
        se.insert(a[j]);
    }
    // for (int i = 1; i <= n; i++)
    //     cout << r[i] << ' ';
    // cout << '\n';
    se.clear();
    // a[i]>a[j] total koyta ace oita ber koteci
    for (int j = 1; j <= n; j++)
    {
        l[j] = se.size() - se.order_of_key(a[j] + 1);
        // cout << se.size() << ' ' << se.order_of_key(a[j] + 1) << ' ' << l[j] << '\n';
        se.insert(a[j]);
    }

    ll ans = 0;
    for (int i = 1; i <= n; i++)
        ans += 1LL * r[i] * l[i];

    cout << ans << '\n';
}
