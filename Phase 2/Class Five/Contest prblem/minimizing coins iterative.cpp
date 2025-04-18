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

const int N = 105, X = 1e6 + 5, inf = 1e9 + 9;
int a[N], dp[X];
int n, x;

int32_t main()
{
    MTK;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= x; i++)
        dp[i] = inf;
    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = a[i]; j <= x; j++)
            dp[j] = min(dp[j], dp[j - a[i]] + 1);
    }

    cout << (dp[x] >= inf ? -1 : dp[x]) << '\n';
    return 0;
}
