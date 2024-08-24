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

int power(int x, int n, int mod)
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
    int b, p, m;
    while (cin >> b >> p >> m)
        cout << power(b, p, m) << '\n';

    return 0;
}