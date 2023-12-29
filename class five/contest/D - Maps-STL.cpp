#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
void print(map<string, int> mp)
{
    for (auto [x, y] : mp)
        cout << x << ' ' << y << '\n';
    cout << '\n';
}
int32_t main()
{
    faster;
    int q, n, x;
    string s;
    cin >> q;
    map<string, int> mp;
    while (q--)
    {
        cin >> n;
        if (n == 1)
        {
            cin >> s >> x;
            auto it = mp.find(s);
            if (it != mp.end())
            {
                mp.erase(it);
                int res = it->second + x;
                mp.insert({s, res});
            }
            else
                mp.insert({s, x});
        }
        else if (n == 2)
        {
            cin >> s;
            auto itx = mp.find(s);
            if (itx != mp.end())
            {
                mp.erase(itx);
            }
            continue;
        }
        else if (n == 3)
        {
            cin >> s;
            auto it1 = mp.find(s);
            if (it1 != mp.end())
            {
                cout << it1->second << '\n';
            }
            else
                cout << 0 << '\n';
        }
    }
}
