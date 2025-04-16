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
int dp[N];

int path(int u)
{
    if (dp[u] != -1)
        return dp[u];
    int ans = 0;
    for (auto v : g[u])
    {
        // (path(v)) count kore rakhe previous value koto cilo and tar sathe just one add kore dicci
        ans = max(ans, 1 + path(v));
    }
    return dp[u] = ans;
}

int32_t main()
{
    MTK;
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
    }

    mem(dp, -1);

    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans = max(ans, path(i));

    cout << ans << '\n';
    return 0;
}
