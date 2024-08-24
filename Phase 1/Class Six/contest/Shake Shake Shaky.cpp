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
int n, k, a[N];
bool ok(int x)
{
    ll count = 0;
    for (int i = 1; i <= n; i++)
    {
        count += a[i] / x;
    }
    // cout << count << ' ' << x << '\n';
    return count >= k;
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int l = 1, r = 1e9, ans = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans << '\n';
    }
    return 0;
}