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
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int cnt[30][2];
    mem(cnt, 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            if (a[i] >> j & 1)
                cnt[j][1]++;
            else
                cnt[j][0]++;
        }
    }
    // brute force approach
    // int res = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //         res += a[i] | a[j];
    // }
    // cout << res << '\n';
    // for (auto x : cnt)
    //     cout << x << ' ';
    // cout << '\n';
    ll ans = 0;
    for (int k = 0; k < 30; k++)
    {
        ll contrib = 1LL * cnt[k][1] * cnt[k][1] + 2 * 1LL * cnt[k][1] * cnt[k][0];
        ans += contrib * (1 << k);
    }
    cout << ans << '\n';
    return 0;
}