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
        // pair<int, int> p = make_pair(x, y);aita oh kora jay
        // mp[p]=s;//map a s value insert kore dilam
        mp[{x, y}] = s; // aita easy way tai aita apply korlam
    }

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        pair<int, int> p = make_pair(x, y);
        auto it = mp.find(p);
        if (it != mp.end())
        {
            cout << mp[p] << '\n';
        }
    }
}
