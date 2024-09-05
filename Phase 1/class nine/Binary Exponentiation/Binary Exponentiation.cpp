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

int power(int x, ll n, int mod)
{
    if (n == 0)
        return 1 % mod;
    int curr = power(x, n / 2, mod);
    if (n % 2 == 0)
        return 1LL * curr * curr % mod;
    else
        return 1LL * curr * curr % mod * x % mod;
}
int32_t main()
{
    MTK;
    int x, m;
    ll n;
    cin >> x >> n >> m;
    cout << power(x, n, m) << '\n';
    return 0;
}