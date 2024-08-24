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
const int N = 1e6 + 9;
int a[N], pre[N];
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pre[i] = pre[i - 1] ^ a[i];
        cout << pre[i] << ' ';
    }
    cout << '\n';
    ll ans = 0;
    map<int, int> mp;
    mp[pre[0]]++;
    for (int i = 1; i <= n; i++)
    {
        ans += mp[pre[i]];
        cout << ans << '\n';
        mp[pre[i]]++;
        // for (auto [x, y] : mp)
        //     cout << x << ' ' << y << '\n';
    }

    // for (auto [x, y] : mp)
    // {
    //     if (x == 0)
    //         ans += y;
    // }
    cout << ans << '\n';
    return 0;
}