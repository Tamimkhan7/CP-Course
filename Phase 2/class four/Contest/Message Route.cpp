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
bool vis[N];
int par[N];

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
    queue<int> q;
    q.push(1);
    vis[1] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto v : g[u])
        {
            if (!vis[v])
            {
                q.push(v);
                par[v] = u;
                vis[v] = true;
            }
        }
    }
    vector<int> path;
    int u = n;
    while (u != 0)
    {
        path.push_back(u);
        u = par[u];
    }
    reverse(all(path));
    // cout << path[0] << ' ' <<  << '\n';
    if (path[0] == 1 and path[path.size() - 1] == n) // first path is 1 and last path is n, must be is it do that
    {
        cout << path.size() << '\n';
        for (auto x : path)
            cout << x << ' ';
        cout << '\n';
    }
    else
        cout << "IMPOSSIBLE" << '\n';
    return 0;
}