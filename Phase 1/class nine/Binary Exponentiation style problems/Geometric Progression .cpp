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
// x^0+x^1+x^2+x^3......x^n
// divided two part and calculate them
int solve(int a, ll x, int mod)
{
    if (x == 0)
        return 1 % mod;
    if (x & 1)
    {
        ll p = x / 2;
        // cout << p << ' ';
        int curr = solve(a, p, mod);                                      // cur auto calculation kore peltece x/2^2 value projnto
        int ans = (curr + 1LL * power(a, p + 1, mod) * curr % mod) % mod; // when x = 7 that the number of time's = 0 1 2 3 4 5 6 7,,, 0 1 2 3 of the half value then if i commna the others value is 4(0 1 2 3) that's the others value
        return ans;
    }
    else
    {
        int ans = (solve(a, x - 1, mod) + power(a, x, mod) % mod) % mod;
        return ans;
    }
}
int32_t main()
{
    MTK;
    int a;
    ll x;
    int m;
    cin >> a >> x >> m;
    cout << solve(a, x - 1, m) << '\n';
    return 0;
}