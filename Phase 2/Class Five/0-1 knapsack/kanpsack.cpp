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
int dp[N][1000005];

int count(int i, int curr_weight)
{
    if (i == n + 1)
        return 0;
    if (dp[i][curr_weight] != -1)
        return dp[i][curr_weight];
    int ans = count(i + 1, curr_weight); // jodi ami na nite pari tahole ami agiye jabo kono weight and value count korbo na
    if (curr_weight + w[i] <= total_weight)
        ans = max(ans, count(i + 1, curr_weight + w[i]) + v[i]);
    return dp[i][curr_weight] = ans;
}
int32_t main()
{
    MTK;

    cin >> n >> total_weight;

    for (int i = 1; i <= n; i++)
        cin >> w[i] >> v[i];
    mem(dp, -1);
    // which index currently i stay and current_weight
    cout << count(1, 0) << '\n';
    return 0;
}