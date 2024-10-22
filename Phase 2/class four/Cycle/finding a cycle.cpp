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
int col[N];
bool cycle = false;
void dfs(int u)
{
    col[u] = 1; // for rea
    for (auto v : g[u])
    {
        if (col[v] == 0)
            dfs(v);
        else if (col[v] == 1)
            cycle = true;
    }
    col[u] = 2; // for blue,, becasue that is not create any cycle
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
        g[u].push_back(v); // jehetu directed graph tai ak dike jabe
    }
    // jodi graph ta disconneted hoy tahole to graph a akhn oh visited kori na oita to visited kora lagbe
    for (int i = 1; i <= n; i++)
    {
        if (col[i] == 0) // mane holo oi node ta akhn oh visite kori na
            dfs(1);
    }

    if (cycle)
        cout << "Found a cycle of this graph" << '\n';
    else
        cout << "Didn't found any cycle of this graph" << '\n';
    return 0;
}