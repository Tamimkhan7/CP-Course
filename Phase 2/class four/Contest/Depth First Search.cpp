#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
using ll = long long;
#define mod 1000000007

const int N = 1e5 + 9;
vector<int> g[N];
bool vis[N];
int discover_time[N], cur_time, finished_time[N];

void dfs(int u)
{
    vis[u] = true;
    cur_time++;
    discover_time[u] = cur_time;
    for (auto v : g[u])
    {
        if (!vis[v])
            dfs(v);
    }
    cur_time++;
    finished_time[u] = cur_time;
    // cout << u << ' ' << cur_time << '\n';
}

int32_t main()
{
    MTK;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++)
        {
            int v;
            cin >> v;
            g[u].push_back(v);
        }
        sort(g[u].begin(), g[u].end());
    }
    cur_time = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
            dfs(i);
    }
    for (int i = 1; i <= n; i++)
        cout << i << ' ' << discover_time[i] << ' ' << finished_time[i] << '\n';
    return 0;
}
