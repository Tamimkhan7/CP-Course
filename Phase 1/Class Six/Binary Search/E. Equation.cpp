#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
double f(double x)
{
    double ans = x * x + sqrt(x);
    // cout << ans << '\n';
    return ans;
}
int32_t main()
{
    MTK;
    double c;
    cin >> c;
    double l = 0, r = 1e6, ans = 0;
    int cnt = 100;
    // both are correct answer for the problem we will use any one that the problem
    //  while ((r - l) >= 1e-7)
    //  {
    //      double mid = (l + r) / 2;
    //      if (f(mid) >= c)
    //      {
    //          ans = mid;
    //          r = mid;
    //      }
    //      else
    //          l = mid;
    //  }
    while (cnt--)
    {
        double mid = (l + r) / 2;
        // cout << mid << '\n';
        if (f(mid) >= c)
        {
            // cout << "ans " << ans << '\n';
            ans = mid;
            r = mid;
        }
        else
            l = mid;
    }
    cout << fixed << setprecision(10) << ans << '\n';
}
// i don't understand that the solution