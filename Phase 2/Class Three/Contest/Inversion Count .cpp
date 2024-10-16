#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        o_set<int> se;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            se.insert(a[i]);
        }
        long long cnt = 0;
        // for (auto x : se)
        //     cout << x << ' ';
        // cout << '\n';
        for (int i = 0; i < n; i++)
        {
            auto x = se.order_of_key(a[i]);
            // cout << x << ' ';
            cnt += x;
            se.erase(a[i]);
            // for (auto x : se)
            //     cout << x << ' ';
            // cout << '\n';
        }
        // cout << '\n';
        cout << cnt << '\n';
    }
    return 0;
}
