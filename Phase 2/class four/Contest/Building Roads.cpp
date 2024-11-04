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

void dfs(int u)
{
    vis[u] = true;
    for (auto v : g[u])
    {
        if (!vis[v])
            dfs(v);
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
    int ans = 0;
    vector<int> new_road;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            new_road.push_back(i);
            ans++;
            dfs(i);
        }
    }
    cout << ans - 1 << '\n';
    for (int i = 1; i < new_road.size(); i++)
        cout << new_road[i - 1] << ' ' << new_road[i] << '\n';
    return 0;
}