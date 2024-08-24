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
    vector<int> v(30, 0);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int cnt[30][2];
    mem(cnt, 0);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < 30; k++)
        {
            if (a[i] >> k & 1)
                cnt[k][1]++;
            else
                cnt[k][0]++;
        }
    }
    // aita holo brute forces approach
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         ans += a[i] ^ a[j];
    //     }
    // }
    int ans = 0;

    for (int i = 0; i < 30; i++)
    {
        // cout << i << ' ' << v[i] << ' ' << 30 - v[i] << '\n';
        int contrib = cnt[i][1] * cnt[i][0] * 2;
        ans += contrib * (1 << i);
    }
    cout << ans << '\n';
    return 0;
}