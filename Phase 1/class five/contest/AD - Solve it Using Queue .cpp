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
    int mx = -1e9, pos;
    for (int i = 0; i < n; i++)
    {
        int ans1 = 0, ans = 0;
        for (int j = i; j <= i + k; j++)
        {
            if (j < n)
            {
                if (s[j] >= 'A' and s[j] <= 'Z')
                {
                    int x = int(s[j]);
                    int y = (x - 65) + 27;
                    ans1 += y;
                }
                else if (s[j] >= 'a' and s[j] <= 'z')
                {
                    int x = int(s[j]);
                    int y = (x - 97) + 1;
                    ans1 += y;
                }
            }
        }
        // cout << ans1 << ' ';
        for (int j = i - 1; j >= i - k; j--)
        {
            if (j >= 0)
            {
                if (s[j] >= 'A' and s[j] <= 'Z')
                {
                    int x = int(s[j]);
                    int y = (x - 65) + 27;
                    ans += y;
                }
                else if (s[j] >= 'a' and s[j] <= 'z')
                {
                    int x = int(s[j]);
                    int y = (x - 97) + 1;
                    ans += y;
                }
            }
        }
        // cout << ans << '\n';
        ans += ans1;
        if (mx < ans)
        {
            mx = ans;
            pos = i;
        }
    }
    cout << pos + 1 << ' ' << mx << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}
