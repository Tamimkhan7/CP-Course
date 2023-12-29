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
#define pop pop_back()
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ak = k, maxi = -1e5;
    for (int i = 0; i < n; i++)
    {
        k = ak;
        int ans = 0;
        for (int x = i + 1, y = i - 1; i - k <= y, x <= k + i; y++, x++)
        {
            if (s[x] >= 'a' and s[x] <= 'z' || s[y] >= 'a' and s[y] <= 'z')
            {
                if (s[x] - 96 > 0)
                    ans += s[x] - 96;
                if (s[y] > 0)
                    ans += s[y] - 96;
                cout << ans << '\n';
            }
            else if (s[x] >= 'A' and s[x] <= 'Z' || s[y] >= 'A' and s[y] <= 'Z')
            {
                if (s[x] - 38 > 0)
                    ans += s[x] - 38;
                if (s[y] - 38 > 0)
                    ans += s[y] - 38;
                cout << ans << '\n';
            }
        }

        if (s[i] >= 'a' and s[i] <= 'z')
            ans += s[i] - 96;
        else
            ans += s[i] - 38;
        maxi = max(ans, maxi);
        cout << s[i] << ' ' << maxi << '\n';
    }
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}