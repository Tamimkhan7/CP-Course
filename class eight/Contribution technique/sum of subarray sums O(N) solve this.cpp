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
int a[N], pw[N];
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    pw[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        pw[i] = (pw[i - 1] * 2) % mod;
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += 1LL * a[i] * ((pw[i - 1] - pw[n - i] + mod) % mod) % mod;
        ans %= mod;
        // cout << ans << ' ';
    }
    // cout << '\n';
    cout << ans << '\n';
    return 0;
}

// time complexity O(n)