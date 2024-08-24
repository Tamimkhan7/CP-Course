#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int n, k;
    cin >> n >> k;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int r = 1, ans = 0, mn = INT_MAX, sum = 0;
    for (int l = 1; l <= n - k + 1; l++)
    {
        while (r <= n)
        {
            if ((r - l) < k)
                sum += a[r++];
            else
                break;
        }
        // cout << l << ' ' << r << '\n';
        // cout << sum << '\n';
        if (sum < mn)
        {
            ans = l;
            mn = sum;
        }
        sum -= a[l];
    }
    cout << ans << '\n';
    return 0;
}