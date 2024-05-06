#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int n, m;
    cin >> n >> m;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int r = 1, ans = INT_MAX;
    multiset<int> se;
    for (int l = 1; l <= n - m + 1; l++)
    {
        while (r <= n)
        {
            if (se.size() < m)
                se.insert(a[r++]);
            else
                break;
        }

        // for (auto x : se)
        //     cout << x << ' ';
        // cout << '\n';
        int mx = *se.rbegin();
        int mn = *se.begin();
        int res = 0;
        for (int i = mn; i <= mx; i++)
        {
            if (se.find(i) == se.end())
            {
                res = i;
                break;
            }
        }
        // cout << res << ' ' << mn << '\n';
        int flag = 0;
        if (res == 0 and mn > 0)
        {
            res = mn - 1;
            flag = 1;
        }
        if (res == 0 and flag == 0)
            res = mx + 1;
        ans = min(ans, res);
        se.erase(se.find(a[l]));
    }
    cout << ans << '\n';
    return 0;
}