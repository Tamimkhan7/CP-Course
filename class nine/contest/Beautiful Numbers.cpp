// order matter na korle use korbo combination and oder matter korle use korbo permutation
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

const int N = 1e6 + 9, mod = 1e9 + 7;
int fact[N], ifact[N], a, b, n;
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
int comb(int n, int r)
{
    if (n < 0 or n < r)
        return 0;
    return 1LL * fact[n] * ifact[r] % mod * ifact[n - r] % mod;
}
bool is_good(int x)
{
    while (x)
    {
        int last_digit = x % 10;
        if (last_digit != a and last_digit != b)
            return false;
        x /= 10;
    }
    return true;
}
int32_t main()
{
    MTK;
    prec();
    cin >> a >> b >> n;
    int ans = 0;
    for (int i = 0; i <= n; i++)
    {
        int digit_sum = i * a + (n - i) * b; // how many way a from n and b from n
        // cout << digit_sum << '\n';
        if (is_good(digit_sum))
        {
            int ways = comb(n, i); // how many way to the value
            ans += ways;
            ans %= mod;
        }
    }
    cout << ans << '\n';
    return 0;
}