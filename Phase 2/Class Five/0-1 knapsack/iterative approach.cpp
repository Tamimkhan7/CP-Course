#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define int int long long
#define mod 1000000007

const int N = 105;
int n, total_weight, w[N], v[N];
int dp[N][100005];

int32_t main()
{
    MTK;

    cin >> n >> total_weight;
    for (int i = 1; i <= n; i++)
        cin >> w[i] >> v[i];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= total_weight; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j >= w[i])
                dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
        }
    }

    cout << dp[n][total_weight] << '\n';
    return 0;
}
// more complicated
