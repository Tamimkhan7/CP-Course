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
vector<int> g[N], val;
bool cycle, vis[N];
int par[N];

void dfs(int u, int p)
{
    if (cycle)
        return;
    par[u] = p;
    vis[u] = true;
    for (auto v : g[u])
    {
        if (cycle)
            return;
        if (!vis[v])
            dfs(v, u);

        else if (p != v)
        {
            int st = u;
            cycle = true;
            while (u != v)
            {
                val.push_back(u);
                u = par[u];
            }
            val.push_back(v);
            val.push_back(st); // first parent store to the vactor
            return;
        }
    }
}
int32_t main()
{
    MTK;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(i, 0);
            if (cycle)
            {
                cout << val.size() << '\n';
                for (auto x : val)
                    cout << x << ' ';
                cout << '\n';
                return 0;
            }
        }
    }

    cout << "IMPOSSIBLE" << '\n';
    return 0;
}