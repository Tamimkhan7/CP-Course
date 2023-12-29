#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
void print(map<int, int> mp)
{
    for (auto [x, y] : mp)
        cout << x << ' ' << y << '\n';
    cout << string(20, '-');
    cout << '\n';
}
int main()
{
    faster;
    int q;
    cin >> q;
    map<int, int> mp;
    while (q--)
    {
        string ty;
        int x;
        cin >> ty >> x;
        // cout << ty << ' ' << x << '\n';
        // print(mp);
        if (ty == "add")
        {
            mp[x]++;
        }
        else
        {
            // print(mp);
            if (mp.find(x) != mp.end())
            {
                mp[x]--;
                if (mp[x] == 0)
                {
                    mp.erase(x); // value diye oi key ta deleted kore dilam
                }
            }
        }
        cout << mp.size() << ' ';
    }
    cout << '\'n';
}