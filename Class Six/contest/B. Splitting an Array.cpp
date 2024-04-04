#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
const int N = 1e5 + 7;
const ll Max_value = 1e14 + 9;
int n, k, a[N];
bool ok(ll x)
{
    int cnt = 1;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum + a[i] <= x)
            sum += a[i];
        else
        {
            if ((a[i] > x))
                return false;
            cnt++;
            sum = a[i];
        }
    }
    return cnt <= k;
}

int main()
{
    MTK;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll l = 1, r = Max_value, ans = 0;
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
    cout << ans << '\n';
    return 0;
}
