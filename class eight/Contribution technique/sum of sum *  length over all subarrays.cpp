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
int a[N];
int f(int n)
{
    return (1LL * n * (n + 1) / 2) % mod;
}
int S(int l, int r)
{
    return (f(r) - f(l - 1) + mod) % mod; // karon two ta mod value ke substration korle negative hoye jete pare tai age mod diye added kore nite hobe tarpor mod korte hobe
}
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int ans = 0;
    // that is solve just O(N)
    //  for (int i = 1; i <= n; i++)
    //  {
    //      int sum = 0;
    //      for (int j = i; j <= n; j++)
    //      {
    //          sum += a[j];
    //          ans += sum * (j - i + 1);
    //      }
    //  }
    // now we can solve optimized
    for (int i = 1; i <= n; i++)
    {
        int contrib = (1LL * S(i, n) * i) % mod - 1LL * ((n - i + 1) * 1LL * S(1, i) % mod + mod) % mod;
        contrib = (contrib + ((n - i + 1) * i) % mod) % mod;
        ans += (1LL * a[i] * contrib) % mod;
        ans %= mod;
    }
    cout << ans << '\n';
    return 0;
}