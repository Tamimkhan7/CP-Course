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
    vector<pair<int, int>> v, v1;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
        v1.push_back(make_pair(x, y));
    }
    // sort(v.begin(), v.end(), cmp);
    sort(v.begin(), v.end(), cmp1);
    int ans = 0;
    int N = 200, flag = 0;
    while (N--)
    {
        int x = v.front().first;
        for (int j = 1; j < v.size(); j++)
        {
            int y = v[j].first;
            if (x < 0)
            {
                if (y > 0)
                {
                    ans += v[j].second;
                    ans += v.front().second;
                    v.erase(v.begin() + j);
                    v.erase(v.begin());
                    flag = 1;
                    break;
                }
            }
            else
            {
                if (y < 0)
                {
                    ans += v[j].second;
                    ans += v.front().second;
                    v.erase(v.begin() + j);
                    v.erase(v.begin());
                    flag = 1;
                    break;
                }
            }
        }
    }
    if (v.size() != 0)
        ans += v.front().second;
    if (flag == 1)
        cout << ans << '\n';
    else
        cout << v1.front().second << '\n';
    // for (auto [x, y] : v)
    // {
    //     cout << x << ' ' << y << '\n';
    // }
    // for (auto a : v)
    // {
    //     d.push_back(a);
    // }
    // int ans = 0, flag = 0;
    // while ((d.front().first < 0 and d.back().first > 0) and d.size() > 1)
    // {
    //     ans += d.front().second;
    //     ans += d.back().second;
    //     d.pop_front();
    //     d.pop_back();
    //     flag = 1;
    // }
    // if (d.size() != 0)
    //     ans += d.front().second;

    // cout << ans << '\n';
}