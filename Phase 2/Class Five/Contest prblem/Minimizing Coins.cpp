#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

const int N = 100, X = 1e6, inf = 1e9 + 9;
int a[N], dp[N][X];
int n, x;

int rec(int i, int sum)
{
    if (sum > x)
        return inf;
    if (i == n + 1)
    {
        if (x == sum)
            return 0;
        else
            return inf;
    }
    if (dp[i][sum] != -1)
        return dp[i][sum];
    int ans = rec(i + 1, sum);              // jodi na nei
    ans = min(ans, rec(i, sum + a[i]) + 1); // nibo and bar bar nite parbo

    return dp[i][sum] = ans;
}
int32_t main()
{
    MTK;

    cin >> n >> x;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    mem(dp, -1);
    int ans = rec(1, 0);
    cout << (ans >= inf ? -1 : ans) << '\n';
    return 0;
}