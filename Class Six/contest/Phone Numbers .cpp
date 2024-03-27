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

int main()
{
    MTK;
    int a, b;
    string s;
    cin >> a >> b >> s;
    vector<string> v;
    s += s;
    cout << s << '\n';
    for (int mask = 0; mask < (1 << (int)s.size()); mask++)
    {
        string ans;
        for (int i = 0; i < (int)s.size(); i++)
        {
            if (mask & (1 << i))
            {
                ans += s[i];
            }
        }
        // cout << ans << '\n';
        if (ans.size() == b)
            v.push_back(ans);
    }
    for (auto subset : v)
        cout << subset << '\n';

    return 0;
}
