#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

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

int inverse(int a, int m)
{
    return power(a, m - 2, m);
}
int32_t main()
{
    MTK;
    int a, b, n;
    cin >> a >> b >> n;
    int ans = inverse(b, n) % n;
    cout << (1LL * ans * a) % n << '\n';
    return 0;
}