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
int col[N];
bool cycle = false, vis[N];
vector<int> val;
void dfs(int u)
{
    col[u] = 0;
    vis[u] = true;
    val.push_back(u);
    for (auto v : g[u])
    {
        if (!vis[v])
        {
            col[v] = col[u] ^ 1;
            dfs(v);
        }
        else if (col[v] == col[u])
        {
            val.push_back(v);
            cycle = true;
            return;
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
    }

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(1);
            if (cycle)
                break;
            val.clear();
            for (int i = 0; i < n; i++)
            {
                vis[i] = false;
                col[i] = 0;
            }
        }
    }

    if (cycle)
    {
        cout << val.size() << '\n';
        for (auto x : val)
            cout << x << ' ';
        cout << '\n';
    }
    else
        cout << "IMPOSSIBLE" << '\n';
    return 0;
}