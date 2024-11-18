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
vector<pair<int, int>> g[N];
int total_val = 0;
bool vis[N];

void dfs(int u, int p = 0) // ai vabe initialization korle buja jay je ei dik theke ami declear koreci
{
    vis[u] = true;
    for (auto [v, w] : g[u])
    {
        if (!vis[v])
        {
            total_val += w;
            dfs(v, u);
        }
        else if (v == 1 and p != 1)
            total_val += w;
    }
}
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    int total_sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int u, v, c;
        cin >> u >> v >> c;
        g[u].push_back({v, 0}); // that's means graph is directed
        g[v].push_back({u, c}); // that's means graph is undirected
        total_sum += c;
    }
    dfs(1);
    cout << min(total_val, total_sum - total_val) << '\n';
    return 0;
}