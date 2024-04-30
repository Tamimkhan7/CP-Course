#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
const int N = 1e5 + 9;
ll a[N];
int n;
int32_t main()
{
    MTK;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    +ll ans = INT_MAX;
    for (int l = 1; l <= n; l++)
    {
        int x = 0;
        for (int r = l; r <= n; r++)
        {
            x = __gcd((ll)x, a[r]);
            if (x == 1)
            {
                ans = min(1LL * (r - l + 1), ans);
                break;
            }
        }
    }
    if (ans == INT_MAX)
        cout << -1 << '\n';
    else
        cout << ans << '\n';
    return 0;
}
