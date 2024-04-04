#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007
const int N = 1e5 + 9;
const int Max_time = 1e9 + 9;
int n, x[N], v[N];
bool ok(double time)
{
    double maxP = -1e18, minP = 1e18;
    for (int i = 1; i <= n; i++)
    {
        // cout << time << ' ';
        maxP = max(maxP, x[i] - (time * v[i]));
        minP = min(minP, x[i] + (time * v[i]));
        // cout << maxP << ' ' << minP << '\n';
    }
    return maxP <= minP;
}

int main()
{
    MTK;

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i] >> v[i];
    double l = 0, r = Max_time, ans;
    int it = 100;
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
