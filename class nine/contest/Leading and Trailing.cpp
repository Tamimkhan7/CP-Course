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
    int t;
    cin >> t;
    while (t--)
    {
        int mod = 1e9 + 7;
        int a, b;
        cin >> a >> b;
        int first = power(a,b,mod);
        cout << first << '\n';
        cout << power(a, b, 1000) << '\n';
    }
    return 0;
}