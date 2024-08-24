#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
const int N = 1e4 + 9;
const int Max_size = 1e14 + 9;
int n, k, a[N];

bool ok(ll x)
{
    int ans = 1;
    int lastPlaced = a[1];

    for (int i = 2; i <= n; ++i)
    {
        if (a[i] - lastPlaced >= x)
        {
            ans++;
            lastPlaced = a[i];
        }
    }

    return ans >= k;
}

int main()
{
    MTK;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    ll l = 1, r = Max_size, ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << '\n';
    return 0;
}
