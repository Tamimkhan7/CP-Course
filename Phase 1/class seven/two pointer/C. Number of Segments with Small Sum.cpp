#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int n;
    ll s;
    cin >> n >> s;
    int a[n + 2];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    ll ans = 0, sum = 0;
    int r = 1;

    for (int l = 1; l <= n; l++)
    {
        while (r <= n and (a[r] + sum) <= s)
        {
            sum += a[r];
            r++;
        }
        sum -= a[l];
        ans += r - l;
    }
    cout << ans << '\n';
    return 0;
}