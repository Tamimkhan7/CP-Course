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

const int N = 1e4 + 9;
vector<int> g[N];
bool vis[N];
int dis[N], cnt[N];

void dfs(int u)
{
    vis[u] = true;
    cnt[u]++;
    for (auto v : g[u])
    {
        if (!vis[v])
            dfs(v);
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
        int k, n, m;
        cin >> k >> n >> m;
        vector<int> v(k);
        for (int i = 1; i <= k; i++)
            cin >> v[i];
        while (m--)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
        }
        for (int i = 1; i <= k; i++)
        {
            // for (int u = 1; u <= n; u++)
            //     vis[u] = false;
            mem(vis, false);
            dfs(v[i]);
        }
        // for (int i = 1; i <= k; i++)
        // {
        //     queue<int> q;
        //     mem(vis, false);
        //     int x = v[i];
        //     q.push(x);
        //     vis[x] = true;

        //     while (!q.empty())
        //     {
        //         int u = q.front();
        //         cnt[u]++;
        //         // show(cnt[u]);
        //         q.pop();
        //         for (auto v : g[u])
        //         {
        //             if (!vis[v])
        //             {
        //                 q.push(v);
        //                 vis[v] = true;
        //             }
        //         }
        //     }
        // }
        int ans = 0;
        for (int p = 1; p <= n; p++)
        {
            if (cnt[p] == k)
            {
                // show(cnt[p]);
                ans++;
            }
        }
        cout << ans << '\n';
        mem(vis, false);
        mem(cnt, 0);
        mem(g, 0);
    }
    return 0;
}