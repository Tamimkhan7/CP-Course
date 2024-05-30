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
void solve()
{
    int n;
    cin >> n;
    int a[n + 1], b[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    int xx = 256, x = 0;

    while (x < xx)
    {
        int ans = 0;
        for (int i = 1; i <= n; i++)
            a[i] ^= x;
        int p = 0;
        for (int i = 1; i <= n; i++)
            p ^= a[i];
        if (p == 0)
        {
            cout << x << '\n';
            return;
        }
        for (int i = 1; i <= n; i++)
            a[i] = b[i];
        x++;
    }
    cout << -1 << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}