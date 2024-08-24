#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define int long long
int n, k;
const i nt  N = 1e7 + 9, p = 1e4 + 9;
int a[p];

bool ok(double x)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += floor(a[i] / x);
    }
    return (ans >= k);
}
int32_t main()
{
    MTK;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    double l = 0, r = N, ans;
    while ((r - l) >= 1e-7) // untill the l and r are 1e-7 difference apart
    {
        double mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid;
        }
        else
            r = mid;
    }
    cout << fixed << setprecision(10) << ans << '\n';

    return 0;
}