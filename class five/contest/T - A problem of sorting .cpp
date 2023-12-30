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
bool cmp(pair<string, int> a, pair<string, int> b)
{
    return a.second > b.second;
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<string, int> mp;
        while (n--)
        {
            string s;
            int x;
            cin >> s >> x;
            mp.insert({s, x});
        }

        vector<pair<string, int>> v;
        for (auto X : mp)
            v.push_back(X);

        sort(v.begin(), v.end(), cmp);

        for (auto [x, y] : v)
            cout << x << '\n';
    }
}