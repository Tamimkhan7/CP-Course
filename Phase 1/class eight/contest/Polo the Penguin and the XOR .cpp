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
const int N = 1e5 + 9;
int a[N], pref[N];
int cnt[30][2];
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        pref[0] = 0;
        for (int i = 1; i <= n; i++)
            pref[i] = pref[i - 1] ^ a[i];

        for (int k = 0; k < 30; k++)
        {
            int curr_bit = (pref[0] >> k) & 1;
            if (curr_bit == 0)
                cnt[k][0]++;
            else
                cnt[k][1]++;
        }
        ll ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int k = 0; k < 30; k++)
            {
                int curr_bit = (pref[i] >> k) & 1;
                if (curr_bit == 1)
                    ans += 1LL * cnt[k][0] * (1 << k);
                else
                    ans += 1LL * cnt[k][1] * (1 << k);
            }

            for (int k = 0; k < 30; k++)
            {
                int curr_bit = (pref[i] >> k) & 1;
                if (curr_bit == 1)
                    cnt[k][1]++;
                else
                    cnt[k][0]++;
            }
        }
        cout << ans << '\n';
        for (int k = 0; k < 30; k++)
        {
            cnt[k][0] = 0;
            cnt[k][1] = 0;
        }
        // cout << ans << '\n';
    }
    return 0;
}