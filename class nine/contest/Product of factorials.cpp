#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define ll long long
#define mod 109546051211
int n;
ll ans = 1;
ll fact(ll a, ll b)
{
    __int128 d = a * b;
    return d % mod;
    // ll fac = 1;
    // for (int i = 1; i <= n; i++)
    //     fac = 1LL * fac * i % mod;
    // return fac;
}
int32_t main()
{
    MTK;
    cin >> n;
    ll curr = 1;
    for (int i = 1; i <= n and ans > 0; i++)
    {
        curr = curr * i % mod;
        ans = fact(ans, curr);
    }
    cout << ans << '\n';
    return 0;
}