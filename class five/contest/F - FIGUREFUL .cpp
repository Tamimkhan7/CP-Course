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
#define pb push_back()
#define pop pop_back()
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    map<pair<int, int>, string> mp;
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        string s;
        cin >> s;
        mp[{x, y}] = s;
    }

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        auto it = mp.find({x, y});
        if (it != mp.end())
        {
            cout << it->second << '\n';
        }
    }
}
