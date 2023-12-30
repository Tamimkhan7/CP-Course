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
    deque<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int n2;
    cin >> n2;
    deque<int> b;
    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    int ans = 0;
    while ((!a.empty()) && (!b.empty()))
    {
        if (ans > 10000)
        {
            ans = -1;
            break;
        }
        if (a.front() > b.front())
        {
            int x = a.front();
            int y = b.front();
            a.push_back(y);
            a.push_back(x);
            a.pop_front();
            b.pop_front();
            ans++;
        }
        else
        {

            int x = a.front();
            int y = b.front();
            b.push_back(x);
            b.push_back(y);
            a.pop_front();
            b.pop_front();
            ans++;
        }
    }
    if (ans == -1)
    {
        cout << ans << '\n';
    }
    else
    {
        int k;
        if (!a.empty())
            k = 1;
        else if (!b.empty())
            k = 2;
        cout << ans << ' ' << k << '\n';
    }
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    solve();
}