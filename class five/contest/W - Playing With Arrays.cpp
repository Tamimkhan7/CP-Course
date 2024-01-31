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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        deque<int> d, xp;
        for (int i = 1; i <= n; i++)
        {
            d.push_back(i);
        }
        while (!d.empty())
        {
            int x = d.back();
            d.push_front(x);
            d.pop_back();
            int y = d.back();
            xp.push_front(y);
            d.pop_back();
        }
        int ans = xp.front();
        xp.pop_front();
        xp.push_back(ans);
        for (auto x : xp)
            cout << x << ' ';
        cout << '\n';
    }
}
// wrong answer on tc 1