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

const int N = 205;
vector<int> g[N];
bool vis[N], ok;
int color[N];

void dfs(int u)
{
    vis[u] = true;
    for (auto v : g[u])
    {
        if (!vis[v])
        {
            color[v] = color[u] ^ 1;
            dfs(v);
        }
        else
        {
            if (color[u] == color[v])
                ok = false;
        }
    }
}
int32_t main()
{
    MTK;
    int n;
    while (cin >> n)
    {
        if (n == 0)
            return 0;

        ok = true;

        // for (int i = 0; i < n; i++)
        // {
        //     vis[i] = false;
        //     g[i].clear();
        //     color[i] = 0;
        // }
        mem(g, 0);
        mem(vis, false);
        mem(color, 0);
        int m;
        cin >> m;
        while (m--)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        dfs(0);
        if (ok)
            cout << "BICOLORABLE." << '\n';
        else
            cout << "NOT BICOLORABLE." << '\n';
    }
    return 0;
}