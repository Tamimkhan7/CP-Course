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
const int Max_time = 1e9 + 9;
int n;
vector<pair<int, int>> v;
bool ok(double mid)
{
    double minP = -1e18, maxP = 1e18;
    for (auto [a, b] : v)
    {
        minP = max(minP, (a - b) * mid);
        maxP = min(maxP, (a + b) * mid);
    }
    return maxP >= minP;
}
int32_t main()
{
    MTK;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    double l = 0, r = Max_time, ans;
    auto it = 100;
    while (it--)
    {
        double mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid;
        }
        else
            l = mid;
    }
    cout << fixed << setprecision(10) << ans << '\n';
    return 0;
}