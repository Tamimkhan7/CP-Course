#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007
int k;
ll x;
ll get_sum(ll n)
{
    return n * (n + 1) / 2;
}
ll get_range_sum(ll l, ll r)
{
    // cout << l << ' ' << r << ' ';
    // ll flag = get_sum(r) - get_sum(l - 1);
    // cout << flag << '\n';
    return  get_sum(r) - get_sum(l - 1);
}

bool ok(ll i)
{
    // cout << i << ' ';
    ll sum = 0;
    if (i <= k)
        sum = get_range_sum(1, i);
    else
        sum = get_range_sum(1, k) + get_range_sum(k - (i - k), k - 1);
    return sum >= x;
}

void solve()
{
    cin >> k >> x;
    int l = 1, r = 2 * k - 1, ans = 2 * k - 1;
    while (l <= r)
    {
        // cout << l << ' ' << r << ' ';
        int mid = (1LL * l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << '\n';
}

int main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
