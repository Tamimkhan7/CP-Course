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
int sz[N];

void dfs(int u, int par)
{
    sz[u] = 1;
    for (auto v : g[u])
    {
        if (v != par)
        {
            dfs(v);
            sz[u] += sz[v];
        }
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

    dfs(1, 0);

    for (int i = 1; i < n; i++)
        cout << sz[i] << ' ';
    cout << '\n';

    return 0;
}