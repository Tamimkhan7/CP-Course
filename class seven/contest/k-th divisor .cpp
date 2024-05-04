#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long
const ll N = 1e15;
ll n;
int k;
int32_t main()
{
    MTK;
    cin >> n >> k;
    ll ans = -1, l = 1, r = n;
    if (n % k == 0)
    {
        cout << k << '\n';
        return 0;
    }

    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (n % mid == 0 and mid >= k)
        {
            ans = mid;
            cout << ans << '\n';
            return 0;
        }
        else if (mid < k)
            l = mid + 1;
        else
            r = mid - 1;
    }
    if (n % n == 0)
    {
        cout << n << '\n';
        return 0;
    }

    return 0;
}