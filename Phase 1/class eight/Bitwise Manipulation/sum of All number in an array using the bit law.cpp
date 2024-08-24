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
// if input value haven 1e18 that's the time fine the value for long long value
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<int> cnt(30, 0);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        for (int j = 0; j < 30; j++)
        {
            if (x >> j & 1)
                cnt[j]++;
        }
    }
    int ans = 0;
    for (int i = 0; i < 30; i++)
    {
        ans += cnt[i] * (1 << i);
    }
    cout << ans << '\n';

    return 0;
}