
/*child a adjacent color jodi sma hoy tahole aita bipartite hobe na*/

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
bool vis[N], ok = true;
int col[N];
void dfs(int u)
{
    vis[u] = true;
    for (auto v : g[u])
    {
        if (!vis[v])
        {
            col[v] = col[u] ^ 1; // jodi non visitied thake tahole ami ultai color kore dicci
            dfs(v);
        }
        else
        {
            if (col[v] == col[u]) // jodi viisted thake tahole oi child vartix ar color edge color same kina,,color jodi same hoy tahole bipartite hobe na
                ok = false;
        }
    }
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
        g[v].push_back(u);
    }
    // disconnected kono graph ace kina  ta check kora jonno loop use kore dfs check korte hobe
    //  ok = true;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
            dfs(i);
    }
    if (ok)
        cout << "Bipartite graph" << '\n';
    else
        cout << "NO Bipartite Graph" << '\n';
    return 0;
}