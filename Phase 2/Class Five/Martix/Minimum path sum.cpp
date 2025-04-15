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

const int N = 100;
int n, m, a[N][N], inf = 1e9 + 7;
int dp[N][N];

int min_cost(int i, int j)
{
    if (i > n or j > m)
        return inf; // if curr position out of the boundary then we are return inf value that is no added in the answer
    if (i == n and j == m)
        return a[i][j]; // jodi amar current position ta last pos hoy tahole oitaii ami return korbo
    if (dp[i][j] != -1)
        return dp[i][j];

    return dp[i][j] = a[i][j] + (min(min_cost(i + 1, j), min_cost(i, j + 1)));
}

void path(int i, int j)
{
    cout << "(" << i << "," << j << ") ";
    if (i == n and j == m)
        return;
    int right = min_cost(i, j + 1);
    int down = min_cost(i + 1, j);
    if (right <= down)
        path(i, j + 1);
    else
        path(i + 1, j);
}
int32_t main()
{
    MTK;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    }
    mem(dp, -1);
    cout << min_cost(1, 1) << '\n';
    path(1, 1);
    return 0;
}