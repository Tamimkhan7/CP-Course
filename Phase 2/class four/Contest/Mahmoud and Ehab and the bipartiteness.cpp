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
bool vis[N], ok;
int col[N], val[2];

void dfs(int u)
{
    vis[u] = true;
    val[col[u]]++;
    for (auto v : g[u])
    {
        if (!vis[v])
        {
            col[v] = col[u] ^ 1;
            dfs(v);
        }
    }
}
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    col[1] = 0;
    dfs(1);
    // total number of node of a tree is n, if a tree is total number of n node then total number of edge of a tree is n-1
    // total number of node red and blue color of a tree, is number of red  * number of blue
    ll va = 1LL * val[1] * val[0]; // 1 means is it red color, 0 means is it blue color
    ll ans = va - (n - 1);
    cout << ans << '\n';
    return 0;
}