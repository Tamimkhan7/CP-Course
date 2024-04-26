#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long ll;
const int N = 2e5;
ll n, t, a[N];

bool ok(ll x)
{
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        count += x / a[i];
        if (count >= t)
            return true;
    }
    return count >= t;
}

int main()
{
    MTK;
    cin >> n >> t;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    ll l = 0, r = 1e18, ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << '\n';
    return 0;
}
