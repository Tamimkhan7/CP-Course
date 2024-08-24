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
// const int N = 2e5 + 9;
// int a[N], b[N];
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
        v.push_back(make_pair(b, a));
    }
    // for (int i = 1; i <= n; i++)
    //     v.push_back({b[i], a[i]});

    sort(all(v));
    // for (auto [x, y] : v)
    //     cout << x << ' ' << y << '\n';
    int ans = 0, last_pos = 0;
    for (auto [x, y] : v)
    {
        if (y >= last_pos)
        {
            ans++;
            last_pos = x;
        }
    }
    cout << ans << '\n';
    return 0;
}