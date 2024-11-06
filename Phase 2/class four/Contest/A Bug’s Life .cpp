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

const int N = 20005;
vector<int> g[N];
bool vis[N], ok;
int col[N];

void dfs(int u)
{
    vis[u] = true;
    for (auto v : g[u])
    {
        if (!vis[v])
        {
            col[v] = col[u] ^ 1;
            dfs(v);
        }
        else
        {
            if (col[u] == col[v])
                ok = false;
        }
    }
}

int32_t main()
{
    MTK;
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        cout << "Scenario #" << ++cs << ":\n";
        int n, m;
        cin >> n >> m;
        ok = true;
        mem(col, 0);
        mem(g, 0);
        mem(vis, false);
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        for (int i = 1; i <= n; i++)
        {
            if (!vis[i])
                dfs(i);
        }
        if (ok)
            cout << "No suspicious bugs found!" << '\n';
        else
            cout << "Suspicious bugs found!" << '\n';
    }
    return 0;
}