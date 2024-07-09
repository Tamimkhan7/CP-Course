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
#define mod 10000007

int power(int x, int n)
{
    int ans = 1 % mod;
    while (n > 0)
    {
        if (n & 1)
            ans = 1LL * ans * x % mod;
        x = 1LL * x * x % mod;
        n >>= 1;
    }
    return ans;
}
int32_t main()
{
    MTK;
    int n, k;
    while (cin >> n >> k)
    {
        if (n == 0 and k == 0)
            break;
        int ans = ((1LL * 2 * power(n - 1, k)) % mod + power(n, k)) % mod;
        ans += ((1LL * 2 * power(n - 1, n - 1)) % mod + power(n, n)) % mod;
        ans %= mod;
        cout << ans << '\n';
    }
    return 0;
}