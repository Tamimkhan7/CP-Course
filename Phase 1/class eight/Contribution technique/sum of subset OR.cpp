#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
const int N = 1e5 + 9;
int a[N];
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int cnt[30][2];
    mem(cnt, 0);
    ll ans = 0;

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
    // it's a big value contain here, that's why we need mod using of every segment
    for (int k = 0; k < 30; k++)
    {
        ll contribu = (1 << n) - (1 << cnt[k][0]);
        ans += contribu * (1 << k);
    }
    cout << ans << '\n';
    return 0;
}