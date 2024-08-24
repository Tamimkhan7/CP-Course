
// combination formula --- nCr = n!/(r!(n-r)!);

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

const int N = 1e6 + 9, mod = 1e9+7;
int fact[N], ifact[N];
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
int inverse(int a)
{
    return power(a, mod - 2);
}
void prec()
{
    fact[0] = 1;
    for (int i = 1; i < N; i++)
        fact[i] = 1LL * fact[i - 1] * i % mod;
    for (int i = 0; i < N; i++)
        ifact[i] = inverse(fact[i]);
}
int nCr(int n, int r)
{
    if (n < 0 or n < r)
        return 0;
    return 1LL * fact[n] * ifact[r] % mod * ifact[n - r] % mod;
}
int32_t main()
{
    MTK;
    prec();
    int q;
    cin >> q;
    while (q--)
    {
        int n, r;
        cin >> n >> r;
        cout << nCr(n, r) << '\n';
    }
    return 0;
}