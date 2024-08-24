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
        int ty;
        string name;
        cin >> ty >> name;
        if (ty == 1)
        {

            int mark;
            cin >> mark;
            mp[name] += mark; // store the value of name
        }
        else if (ty == 2)
        {

            cin >> name;
            auto it = mp.find(name);
            if (it != mp.end())
            {
                mp.erase(it);
            }
            // mp.erase(mp.find(name));aita oh kaj korbe tobe aktu jamela korte pare
            // mp[name] = 0; // erase the name value,,,//karon map always 0 dara sorte thake
        }
        else
        {

            cout << mp[name] << '\n';
        }
    }
}