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
    vector<int> v(10, 3);
    for (auto x : v)
        cout << x << '\n';
    vector<int> xp{1, 2, 3, 4, 5, 6};
    cout << '\n';
    for (auto x : xp)
        cout << x << '\n';
}