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
    map<string, string> mp;
    string s, ss;
    while (cin >> s >> ss)
    {
        if (s.empty() and ss.empty())
        {
            break;
        }
        mp.insert({s, ss});
        cout << s << ' ' << ss << '\n';
    }
    string xp;
    while (cin >> xp)
    {
        cout << xp << '\n';
    }
}