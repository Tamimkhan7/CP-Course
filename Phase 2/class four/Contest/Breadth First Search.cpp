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

const int N = 105, inf = 1e5;
vector<int> g[N];
bool vis[N];
int dis[N];

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++)
        {
            int v;
            cin >> v;
            g[u].push_back(v);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        vis[i] = false;
        dis[i] = inf;
    }
    queue<int> q;
    q.push(1);
    vis[1] = true;
    dis[1] = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto v : g[u])
        {
            if (!vis[v])
            {
                q.push(v);
                dis[v] = dis[u] + 1;
                vis[v] = true;
            }
        }
    }
    for (int i = 1; i <= n; i++)
        cout << i << ' ' << (dis[i] == inf ? -1 : dis[i]) << '\n';

    return 0;
}