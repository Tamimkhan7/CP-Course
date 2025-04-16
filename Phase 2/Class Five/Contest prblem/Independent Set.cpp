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

const int N = 1e5 + 9;
vector<int> g[N];
int dp[N][2]; // for two color, black and white

void dfs(int u, int par)
{
    dp[u][0] = 1; // for white color
    dp[u][1] = 1; // for black color

    for (auto v : g[u]) 
    {
        if (v != par)
        {
            dfs(v, u);
            dp[u][0] = (1LL * dp[u][0] * (dp[v][0] + dp[v][1])) % mod;
            dp[u][1] = (1LL * dp[u][1] * dp[v][0]) % mod; // just we can use white color, don't us black color
        }
    }
}
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1, 0);
    cout << (dp[1][0] + dp[1][1]) % mod << '\n';
    return 0;
}