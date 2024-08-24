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
int a[N], n;
ll s, p[N];
bool ok(int x)
{
    for (int i = x; i <= n; i++)
    {
        if (p[i] - p[i - x] <= s)
            return true;
    }
    return false;
}
int32_t main()
{
    MTK;
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        p[i] = p[i - 1] + a[i];
    }
    // for(auto x: p)cout<<x<<' ';
    // cout << '\n';

    int l = 1, r = n, ans = 0;

    while (l <= r)
    {
        int mid = (l + r) / 2;
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