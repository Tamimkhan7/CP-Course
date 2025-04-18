#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

const int N = 3001;
double p[N], dp[N][N];
int n;

int32_t main()
{
    MTK;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> p[i];

    for (int head = 0; head <= n; head++)
    {
        for (int tail = 0; tail <= n; tail++)
        {
            if (head + tail == n)
            {
                // cout << head << ' ' << tail << ' ' << "YES\n";
                dp[n + 1][head] = (head > tail ? 1.0 : 0.0);
            }
        }
    }

    // for (int i = 1; i <= n + 1; i++)
    // {
    //     for (int j = 1; j <= n + 1; j++)
    //         cout << dp[i][j] << ' ';
    //     cout << '\n';
    // }

    for (int i = n; i >= 1; i--)
    {
        for (int head = 0; head <= i; head++)
            dp[i][head] = p[i] * dp[i + 1][head + 1] + (1 - p[i]) * dp[i + 1][head];
    }

    cout << fixed << setprecision(10) << dp[1][0] << '\n';
    return 0;
}
