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

    ll n;
    cin >> n;
    ll x = sqrtl(n);
    int ans = 0;
    for (int p = 2; p * p <= x; p++)
    {
        if (x % p == 0)
        {
            ans = max(ans, p);
            while (x % p == 0)
                x /= p;
        }
    }
    if (x > 1)
        ans = max(ans, (int)x);
    cout << ans << '\n';
}