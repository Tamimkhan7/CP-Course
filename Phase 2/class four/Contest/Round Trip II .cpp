#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define ll int long long

const int N = 1e5 + 9;
vector<int> g[N], val;
bool cycle;
int col[N], par[N];

void dfs(int u)
{
    col[u] = 1;
    for (auto v : g[u])
    {
        if (!col[v])
        {
            par[v] = u;
            dfs(v);
            if (cycle)
                return;
        }
        else if (col[v] == 1)
        {
            cycle = true;
            int cur = u;
            val.push_back(v);
            while (cur != v)
            {
                val.push_back(cur);
                cur = par[cur];
            }
            val.push_back(v);
            reverse(all(val));
            return;
        }
    }
    col[u] = 2;
}

int32_t main()
{
    MTK;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!col[i])
        {
            dfs(i);
            if (cycle)
            {
                cout << val.size() << '\n';
                for (auto x : val)
                    cout << x << ' ';
                cout << '\n';
                return 0;
            }
        }
    }

    cout << "IMPOSSIBLE" << '\n';
    return 0;
}
