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
    int q;
    cin >> q;
    map<string, int> mp;
    while (q--)
    {
        int x, y;
        cin >> x;
        string ty;
        cin >> ty;
        cin >> y;
        if (x == 1)
        {
            mp.insert({ty, y});
            print(mp);
        }
        else if (x == 2)
        {
            if (mp.find(ty) != mp.end())
            {
                mp.erase(ty);
                print(mp);
            }
        }
        else
        {
            if (mp.find(ty) != mp.end())
            {
                cout << mp[y];
            }
        }
        cout << mp.size() << '\n';
    }
}