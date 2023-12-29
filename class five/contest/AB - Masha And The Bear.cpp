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
void solve()
{
    int n;
    cin >> n;
    deque<int> d;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        d.push_back(x);
    }
    int ans_m = 0, ans_b = 0;
    // cout<<d.size()
    while (d.size() > 0)
    {
        ans_m += d.front();
        d.pop_front();
        cout << ans_m << ' ' << d.front() << '\n';
        ans_m += d.front();
        d.pop_front();
        ans_b += d.back();
        d.pop_back();
        ans_b += d.back();
        d.pop_back();
        cout << d.size() << '\n';
    }
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}