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
    cin >> n;
    int a[n + 1], p[n + 1];
    p[0] = 0;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        p[i] = p[i - 1] + a[i];
        p[i] %= n;
        p[i] = (p[i] + n) % n;
    }
    for (auto x : p)
        cout << x << ' ';
    cout << '\n';
    ll ans = 0;
    map<int, int> mp;
    mp[p[0]]++;
    for (int i = 1; i <= n; i++)
    {
        ans += mp[p[i]];
        mp[p[i]]++;
    }
    cout << ans << '\n';
    return 0;
}