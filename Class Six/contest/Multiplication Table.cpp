#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
ll n;
bool ok(ll x)
{
    // cout << x << ' ';
    ll count = 0;
    for (int i = 1; i <= n; i++)
        count += min((x / i), (ll)n);
    // cout << count << '\n';
    //(n*n)/2+1//for find the mid value//if why added to the mid value if i find negative value that's why we use 1 for adding value
    return count >= (n * n) / 2 + 1;
}

int main()
{
    MTK;
    cin >> n;

    ll l = 0, r = 1e12, ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << endl;
    return 0;
}
