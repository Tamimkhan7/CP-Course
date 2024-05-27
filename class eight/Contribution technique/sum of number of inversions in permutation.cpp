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
ll F(int n)
{
    return (1LL * n * (n - 1) / 2) % mod;
}
ll f(int n)
{
    ll fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = (1LL * fact * i) % mod;
        fact %= mod;
    }
    return fact;
}
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    ll ans = ((f(n) / 2) % mod * F(n) % mod) % mod;
    ans %= mod;
    cout << ans << '\n';

    return 0;
}