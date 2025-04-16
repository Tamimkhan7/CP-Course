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
int indegree[N], dp[N];

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
        indegree[v]++;
    }

    queue<int> q;

    for (int i = 1; i <= n; i++)
    {
        if (indegree[i] == 0)
            q.push(i);
    }

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto v : g[u])
        {
            dp[v] = max(dp[v], dp[u] + 1);
            indegree[v]--;
            if (indegree[v] == 0)
                q.push(v);
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans = max(ans, dp[i]);

    cout << ans << '\n';
    return 0;
}
