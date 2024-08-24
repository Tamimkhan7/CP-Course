#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll int long long
double c;
bool ok(double x)
{
    return (x * x + sqrt(x)) >= c;
}

int32_t main()
{
    MTK;
    cin >> c;
    double l = 0, r = 1e5, ans=0; // jehetu x*x ache tai c half nile kaj hoye jabe
    while ((r - l) >= 1e-7)
    {
        double mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid; // jehetu double tai ak ghor dane bame jawa jabe na
        }
        else
            l = mid;
    }
        cout << fixed << setprecision(10) << ans << '\n';

    return 0;
}