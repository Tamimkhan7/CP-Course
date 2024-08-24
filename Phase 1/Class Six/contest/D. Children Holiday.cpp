#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll int long long
const int N = 1005, MAX_TIME = 1e7;
int required_balloons, n, t[N], z[N], y[N], balloons[N];
bool ok(int total_time)
{
    ll total_balloon = 0, balloons_left = required_balloons;
    for (int i = 1; i <= n; i++)
    {
        int block_time = t[i] * z[i] + y[i];             // find the total number of block time
        int count_block = total_time / block_time;       // find the total number of block there
                                                         // cout << block_time << ' ' << count_block << ' ';
        ll current_balloon = (1LL * count_block * z[i]); // current balloons should be there
        // total_balloon = current_balloon;
        int partial_block = total_time % block_time; // find the number of partial balloons should be there
        current_balloon += min(z[i], partial_block / t[i]);
        total_balloon += current_balloon;
        balloons[i] = min(balloons_left, current_balloon);
        // cout << current_balloon<<' '<<balloons[i] << '\n';
        balloons_left -= balloons[i];
    }
    return total_balloon >= required_balloons;
}
int32_t main()
{
    MTK;
    cin >> required_balloons >> n;
    for (int i = 1; i <= n; i++)
        cin >> t[i] >> z[i] >> y[i];
    int l = 0, r = MAX_TIME, ans = 0;
    while (l <= r)
    {
        int mid = (1LL * l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    ok(ans);
    cout << ans << '\n';
    for (int i = 1; i <= n; i++)
        cout << balloons[i] << ' ';
    cout << '\n';

    return 0;
}
