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
    string s;
    map<string, int> mp;
    while (cin >> s)
    {
        stringstream ss(s);
        string word;
        while (ss >> word)
        {
            // cout << word << ' ';
        }
        for (auto xp : word)
            cout << xp << ' ';
        cout << '\n';
    }
}