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
int depth[N];
int mx, node, ans;
void dfs1(int u, int d)
{
    depth[u] = depth[d] + 1; // Previous depth + 1 that's we find prantes depth
    if (depth[u] > mx)
    {
        mx = depth[u]; // parents of the leap node or maximum depth node that is parents node
        node = u;
    }

    for (auto v : g[u])
    {
        if (v != d)
            dfs1(v, u);
    }
}

void dfs2(int u, int d)
{
    depth[u] = depth[d] + 1;
    ans = max(ans, depth[u] - 1);

    for (auto v : g[u])
    {
        if (v != d)
            dfs2(v, u);
    }
}
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs1(1, 0);
    cout << node << ' ' << mx << '\n';
    dfs2(node, 0);
    cout << ans << '\n';

    return 0;
}