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
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}
bool cmp1(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    deque<pair<int, int>> d;
    vector<pair<int, int>> v;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end(), cmp);
    // sort(v.begin(), v.end(), cmp1);
    // for (auto [x, y] : v)
    // {
    //     cout << x << ' ' << y << '\n';
    // }
    for (auto a : v)
    {
        d.push_back(a);
    }
    int ans = 0, flag = 0;
    while ((d.front().first < 0 and d.back().first > 0) and d.size() > 1)
    {
        ans += d.front().second;
        ans += d.back().second;
        d.pop_front();
        d.pop_back();
        flag = 1;
    }
    if (d.size() != 0 and flag == 0)
        ans += d.front().second;
    else if (d.size() != 0 and flag == 1)
        ans += d.front().second;
    cout << ans << '\n';
}