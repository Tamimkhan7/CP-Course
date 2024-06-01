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

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans |= a[i];
        a[i] = ans;
    }
    int ans2 = 1;
    for (int i = 1; i <= n; i++)
    {
        ans &= b[i];
        b[i] = ans;
    }
    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);
    // for (int i = 1; i <= n; i++)
    //     cout << a[i] << ' ';
    // cout << '\n';

    cout << a[n] - b[1] << '\n';
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