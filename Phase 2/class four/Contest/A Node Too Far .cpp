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

const int inf = 1e9;

int32_t main()
{
    MTK;
    int n, cs = 0;
    while (cin >> n && n > 0)
    {
        map<int, vector<int>> g;
        set<int> se;
        while (n--)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
            se.insert(u);
            se.insert(v);
        }
        // for (auto x : se)
        //     cout << x << ' ';
        // cout << '\n';
        int start, reachable;
        while (cin >> start >> reachable && !(start == 0 && reachable == 0))
        {
            map<int, int> dis;
            for (auto u : se)
                dis[u] = inf;

            queue<int> q;
            q.push(start);
            dis[start] = 0;

            while (!q.empty())
            {
                int u = q.front();
                q.pop();

                for (auto v : g[u])
                {
                    if ((dis[u] + 1) < dis[v])
                    {
                        q.push(v);
                        dis[v] = dis[u] + 1;
                    }
                }
            }
            int not_reachable = 0;
            for (auto u : se)
            {
                if (dis[u] > reachable)
                    not_reachable++;
            }
            cout << "Case " << ++cs << ": " << not_reachable << " nodes not reachable from node " << start << " with TTL = " << reachable << ".\n";
        }
    }
    return 0;
}
