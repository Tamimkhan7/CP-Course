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
int a[N];

int32_t main()
{
    MTK;
    int n;
    ll s;
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int r = 1;
    ll ans = 0, sum = 0;
    for (int l = 1; l <= n; l++)
    {
        while (r <= n)
        {
            if (sum+a[r] < s)
                sum += a[r++];
                        else break;
        }
        // cout << sum << '\n';
        // cout << l << ' ' << r << ' ';
        // if (sum >= s)
            ans += n - r + 1;
        // cout << ans << '\n';
        sum -= a[l];
    }
    cout << ans << '\n';
    return 0;
}