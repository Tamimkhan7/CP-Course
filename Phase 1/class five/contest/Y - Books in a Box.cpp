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
    deque<int> q;
    while (t--)
    {
        int ty, x;
        cin >> ty;

        if (ty == 1)
        {
            cin >> x;
            q.push_front(x);
        }
        else if (ty == 2)
        {
            if (!q.empty())
                q.pop_front();
        }
        else if (ty == 3)
        {
            if (!q.empty())
                cout << q.front() << '\n';
        }
    }
    // for (auto x : q)
    //     cout << x << '\n';
}