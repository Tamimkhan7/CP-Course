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
    for (int i = 0; i < n; i++)
    {
        string old_user, current_user;
        cin >> old_user >> current_user;
        auto it = mp.find(old_user);
        if (it != mp.end())
        {
            mp[current_user] = mp[old_user];
            mp.erase(old_user);
            // cout << "1 " << mp[current_user] << ' ' << mp[old_user] << '\n';
        }
        else
        {
            mp[current_user] = old_user;
            // cout << "2 " << mp[current_user] << ' ' << old_user << '\n';
        }
    }
    cout << mp.size() << '\n';
    for (auto [x, y] : mp)
        cout << y << ' ' << x << '\n';
}