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
    cout << ((1 << __lg(n)) - 1) << '\n';
    // ll ans = n;
    // int x = n - (__lg(n));
    // for (int i = n - 1; i >= x; i--)
    // {
    //     ans &= i;
    //     if (ans == 0)
    //     {
    //         cout << i << '\n';
    //         return;
    //     }
    // }
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