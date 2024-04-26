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
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(all(v));
    ll ans = 0, curr = 0;
    for (auto [x, y] : v)
    {
        curr += x;
        // cout << curr << ' ' << y << ' ' << ans << '\n';
        ans += y - curr;
    }
    cout << ans << '\n';
    return 0;
}