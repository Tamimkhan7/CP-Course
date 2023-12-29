#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    auto [x1, y1] = a;
    auto [x2, y2] = b;
    if (x1 > x2)
        return true;
    else if (x1 == x2)
    {
        if (y1 < y2)
        {
            return true;
        }
    }
    return false;
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> a;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            a.push_back({x, y});
        }
        sort(a.rbegin(), a.rend(), cmp);

        for (auto [x, y] : a)
        {
            cout << x << ' ' << y << '\n';
        }
    }
}