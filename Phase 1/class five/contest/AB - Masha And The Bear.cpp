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
    ll ans_m = 0, ans_b = 0;
    while (!d.empty())
    {
        int x;
        if (d.size() >= 1)
        {
            x = d.front();
            ans_m += x;
            d.pop_front();
            if (d.size() > 0)
            {
                x = d.front();
                ans_m += x;
                d.pop_front();
            }
        }
        if (d.size() >= 1)
        {
            x = d.back();
            ans_b += x;
            d.pop_back();
            if (d.size() > 0)
            {
                x = d.back();
                ans_b += x;
                d.pop_back();
            }
        }
    }
    if (ans_m == ans_b)
        cout << "Draw" << '\n';
    else if (ans_m > ans_b)
        cout << "Masha" << '\n';
    else
        cout << "The Bear" << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}
