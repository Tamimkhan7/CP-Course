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

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    map<string, string> mp;
    while (n--)
    {
        string old_user, new_user;
        cin >> old_user >> new_user;
        if (mp.find(old_user) == mp.end())
        {
            mp[new_user] = old_user;
        }
        else
        {
            mp[new_user] = mp[old_user];
            mp.erase(old_user);
        } 
    }
    cout << mp.size() << '\n';
    for (auto [x, y] : mp)
        cout << y << ' ' << x << '\n';
}