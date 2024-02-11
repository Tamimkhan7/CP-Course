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
        string x, a, b;
        cin >> x >> a >> b;
        for (int i = 0; i < 26; i++)
        {
            if (x.front() == a.front() || x.front() == b.front())
            {
                if (x.front() == a.front() and b.front() < x.front())
                {
                    cout << ">" << '\n';
                    // cout << a << ' ' << b << '\n';
                    return 0;
                }
                else if (b.front() == x.front() and (a.front() < x.front()))
                {
                    cout << "<" << '\n';
                    return 0;
                }
                a.erase(a.begin());
                b.erase(b.begin());
            }
            x.erase(x.begin());
            // cout << x << '\n';
        }
    }
}