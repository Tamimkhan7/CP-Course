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
const int N = 1e5 + 9;
int a[N], n, k;
int32_t main()
{
    MTK;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    ll sum = 0, ans = LLONG_MIN;
    for (int i = 1; i <= n; i++)
    {
        sum += a[i];
        if (i >= k)
        {
            ans = max(ans, sum);
            sum -= a[i - k + 1]; // k th last digit deleted
        }
    }
    cout << ans << '\n';
    return 0;
}