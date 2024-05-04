#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long
bool ok(ll n)
{
    if (n == 1)
        return false;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int32_t main()
{
    MTK;
    ll n;
    cin >> n;
    if (ok(n))
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
    return 0;
}