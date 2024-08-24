// given two integer x and n find x^n modulo m;
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
    for (int i = 1; i <= n; i++)
        ans = 1LL * ans * x % mod;
    return ans;
}

int32_t main()
{
    MTK;
    int x = 1e8 + 9, n = 1e6, m = 1e9 + 7;
    cout << power(x, n, m) << '\n';
    return 0;
}