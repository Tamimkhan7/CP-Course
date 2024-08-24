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
const int N = 1e6 + 9;
int a[N], pw[N];
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    pw[0] = 1;
    for (int i = 1; i <= n; i++)
        pw[i] = (pw[i - 1] * 2) % mod;
    ll ans = 0;
// for(auto x: pw)cout<<x<<' ';
// cout << '\n';
for (int j = 0; j < 30; j++) 

{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] >> j & 1)
            cnt++;
    }
    ans += (pw[cnt] - 1) * (1 << j) % mod;
    ans %= mod;
    }
    cout << ans << '\n';
    return 0;
}
