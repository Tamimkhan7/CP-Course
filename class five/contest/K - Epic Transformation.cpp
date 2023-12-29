#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void solve()
{
    int n;
    priority_queue<pair<int, int>> p;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    for (auto [x, y] : mp)
    {
        p.push({y, x});
        // cout << x << ' ' << y << '\n';
    }
    int sz = n;
    while (p.size() >= 2)
    {
        auto [a, b] = p.top();
        // cout << a << ' ' << b << '\n';
        p.pop();
        auto [c, d] = p.top();
        // cout << c << ' ' << d << '\n';
        p.pop();
        a--;
        c--;
        sz -= 2;
        // cout << sz << '\n';
        if (a)
        {
            p.push({a, b});
        }
        if (c)
            p.push({c, d});
    }
    cout << sz << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
