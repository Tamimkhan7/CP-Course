#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long
template <typename T>
using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int32_t main()
{
    MTK;
    o_set<int> se;
    se.insert(9);
    se.insert(2);
    se.insert(6);
    se.insert(3);
    se.insert(6);
    for (auto x : se)
        cout << x << ' ';
    cout << '\n';

    auto it = se.find_by_order(1); // 2 number position a je ace oy cole asbe
    cout << *it << '\n';
    cout << se.order_of_key(3) << '\n'; // 3 value ta koy numnber index a ace oita return kore
    return 0;
}