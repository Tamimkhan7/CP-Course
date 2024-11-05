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
int par[N];

int32_t main()
{
    MTK;
    int n, m;
    cin >> n >> m;
    int x = n;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    queue<int> q;
    q.push(1);
    vis[1] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto v : g[u])
        {
            if (!vis[v])
            {
                q.push(v);
                par[v] = u;
                vis[v] = true;
            }
        }
    }
    vector<int> ans;
    while (n > 0)
    {
        ans.push_back(n);
        n = par[n];
    }
    reverse(all(ans));
    // cout << ans[0] << ' ' <<  << '\n';
    if (ans[0] == 1 and ans[ans.size() - 1] == x)
    {
        cout << ans.size() << '\n';
        for (auto x : ans)
            cout << x << ' ';
        cout << '\n';
    }
    else
        cout << "IMPOSSIBLE" << '\n';
    return 0;
}