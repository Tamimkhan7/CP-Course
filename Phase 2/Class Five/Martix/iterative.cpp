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

int min_cost()
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = m; j >= 1; j--)
        {
            if (i == n and j == m)
                dp[i][j] = a[i][j];
            else
            {
                int right = (j + 1 <= m) ? dp[i][j + 1] : inf;
                int down = (i + 1 <= n) ? dp[i + 1][j] : inf;
                dp[i][j] = a[i][j] + min(right, down);
            }
        }
    }
    return dp[1][1];
}

void path()
{
    int i = 1, j = 1;
    while (true)
    {
        cout << "(" << i << "," << j << ") ";
        if (i == n and j == m)
            break;
        int right = (j + 1 <= m) ? dp[i][j + 1] : inf;
        int down = (i + 1 <= n) ? dp[i + 1][j] : inf;
        if (right <= down)
            j++;
        else
            i++;
    }
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
    cout << min_cost() << '\n';
    path();
    return 0;
}
