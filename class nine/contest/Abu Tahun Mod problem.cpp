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
    int n;
    cin >> n;
    vector<int> v(n + 1), vv;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    int ans = 0;
    // use two pointer mathod
    for (int i = 1; i <= n / 2; i++)
    {
        ans = __gcd(ans, abs(v[i] - v[n - i + 1]));
        // cout << ans << ' ' << v[i] << ' ' << v[n - i + 1] << ' ' << abs(v[i] - v[n - i + 1]) << '\n';
    }

    if (ans == 0)
        cout << -1 << '\n';
    else
        cout << ans << '\n';
    return 0;
}