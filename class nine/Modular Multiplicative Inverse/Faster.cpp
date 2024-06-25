#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
// find power to the value of  a^m-2 for a^-1
int power(int x, int n, int m) // o(long n)
{
    int ans = 1 % m;
    while (n > 0)
    {
        if (n & 1)
            ans = 1LL * ans * x % m;
        x = 1LL * x * x % m;
        n >>= 1;
    }
    return ans;
}
// m is prime
int inverse(int a, int m)
{
    return power(a, m - 2, m);
}
int32_t main()
{
    MTK;
    int a, p;
    cin >> a >> p;
    cout << inverse(a, p) << '\n';
    return 0;
}