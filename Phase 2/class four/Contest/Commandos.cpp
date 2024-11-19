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

const int N = 105, inf = 1e9;
vector<int> g[N];
bool vis[N];
int n;

vector<int> bfs(int s)
{
    vector<int> dis(n, inf);
    mem(vis, false);

    queue<int> q;
    q.push(s);
    vis[s] = true;
    dis[s] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto v : g[u])
        {
            if (!vis[v])
            {
                vis[v] = true;
                dis[v] = dis[u] + 1;
                q.push(v);
            }
        }
    }
    return dis;
}

int32_t main()
{
    MTK;
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        cout << "Case " << ++cs << ": ";
        int r;
        cin >> n >> r;

        for (int i = 0; i < n; i++)
            g[i].clear();

        while (r--)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        int s, d;
        cin >> s >> d;

        auto ds = bfs(s);
        // vector<int> dist_from_s(dis, dis + n);

        auto de = bfs(d);
        // vector<int> dist_from_d(dis, dis + n);

        int ans = 0;
        for (int i = 0; i < n; i++)
            ans = max(ans, ds[i] + de[i]);

        cout << ans << '\n';
    }
    return 0;
}
