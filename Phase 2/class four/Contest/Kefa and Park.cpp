#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

const int N = 1e5 + 9;
vector<int> g[N];
bool vis[N];
int vv[N], m, ans;
int consecutive_cats[N];
void dfs(int u, int cnt)
{

    if (vv[u])
        consecutive_cats[u] = consecutive_cats[cnt] + 1;
    else
        consecutive_cats[u] = 0;

    if (consecutive_cats[u] > m)
        return;

    bool is_valid = true;
    for (auto v : g[u])
    {
        if (v != cnt)
        {
            dfs(v, u);
            is_valid = false;
        }
    }
    if (is_valid)
        ans++;
}

int32_t main()
{
    MTK;
    int n;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> vv[i];

    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1, 0); // first dfs move 1 index and count value is 0
    cout << ans << '\n';
    return 0;
}
