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
    // int a[n + 1];
    // for (int i = 1; i <= n; i++)
    //     cin >> a[i];
    // sort(a + 1, a + n + 1);
    // ll ans = a[1];
    // for (int i = 2; i <= n; i++)
    //     ans |= a[i];
    // sob gula ak sathe or korle amar cost kom hobe alada alada korle cost bere jabe
    // kicu + kicu or korle taoh answer bere jabe
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ans |= x;
    }
    cout << ans << '\n';
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