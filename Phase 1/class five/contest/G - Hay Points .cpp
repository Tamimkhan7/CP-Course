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
    int m, q;
    map<string, int> mp;
    cin >> m >> q;
    while (m--)
    {
        string s;
        int x;
        cin >> s >> x;
        mp[s] = x;
    }
    while (q--)
    {
        ll salary = 0;
        string s;
        while (cin >> s)
        {
            if (s == ".")
                break;
            auto it = mp.find(s); // better practices
            if (it != mp.end())
                salary += mp[s];
        }
        cout << salary << '\n';
        // cout << mp.size() << '\n';//extra onek gula word ar corresponding value add hoye gece
    }
}