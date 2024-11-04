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
int val[N];
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
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int u, v, c;
        cin >> u >> v >> c;
        val[i] = c;
        g[u].push_back(v);
    }
    
    return 0;
}