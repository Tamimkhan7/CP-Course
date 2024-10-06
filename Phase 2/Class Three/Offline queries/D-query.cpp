#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
template <typename T>
using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    o_set<int> se;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        se.insert(x);
    }
    for (auto x : se)
        cout << x << ' ';
    cout << '\n';
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        // int x = *se.find_by_order(l);
        // int y = *se.find_by_order(r);
        int x = se.order_of_key(l);
        int y = se.order_of_key(r);

        cout << x << ' ' << y << '\n';
    }
    return 0;
}