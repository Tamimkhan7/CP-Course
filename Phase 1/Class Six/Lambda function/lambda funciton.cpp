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
    int a, b;
    cin >> a >> b;
    int x = 100;
    auto ans = [&](int a, int b) // if i want to another value using my lambda funciton we will define maybe reference or =
    {
        return (a * b) + x;
    };
    x = 1000;
    cout << ans(a, b) << '\n';
    cout << x << '\n';
}