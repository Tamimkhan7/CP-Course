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

const int N = 105;
vector<int> g[N];
bool vis[N];
int dis[N];

void bfs(int s, int n)
{
    mem(dis, 0);
    mem(vis, false);
    queue<int> q;
    q.push(s);
    vis[s] = true;

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
}

int32_t main()
{
    MTK;
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        cout << "Case " << ++cs << ": ";
        int n, r;
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

        bfs(s, n);
        vector<int> dist_from_s(dis, dis + n);

        bfs(d, n);
        vector<int> dist_from_d(dis, dis + n);

        int ans = 0;
        for (int i = 0; i < n; i++)
            ans = max(ans, dist_from_s[i] + dist_from_d[i]);

        cout << ans << '\n';
    }
    return 0;
}
