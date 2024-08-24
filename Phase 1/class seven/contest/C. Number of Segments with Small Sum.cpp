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
const int N = 1e5 + 9;
int a[N], n;
ll s;
int32_t main()
{
    MTK;
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int r = 1;
    ll sum = 0, ans = 0;
    for (int l = 1; l <= n; l++)
    {
        while (r <= n)
        {
            if (sum + a[r] <= s)
                sum += a[r++];
            else
                break;
        }
        ans += r - l;
        sum -= a[l];
    }
    cout << ans << '\n';
    return 0;
}