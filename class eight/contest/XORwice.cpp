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

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int x = a ^ b;

        // int x = min(a, b);
        // int p = sqrt(x);
        // // cout<<x<<' '<<p<<'\n';
        // ll ans = 1e18;
        // while (p--)
        // {
        //     ll xs = (x ^ a) + (x ^ b);
        //     // cout << x << '\n';
        //     ans = min(ans, xs);
        //     x--;
        // }
        cout << x << '\n';
    }
    return 0;
}