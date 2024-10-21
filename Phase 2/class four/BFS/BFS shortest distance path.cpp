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
bool visi[N];
int dis[N];

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
    queue<int> q;
    q.push(1);
    visi[1] = true;
    dis[1] = 0; // 1-1 ar distance always 0
    int layer = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto v : g[u])
        {
            if (!visi[v])
            {
                q.push(v);
                // par[v] = u;
                dis[v] = dis[u] + 1;
                visi[v] = true;
            }
        }
    }
    for (int i = 0; i <= n; i++)
        cout << dis[i] << ' ';
    cout << '\n';

    cout << dis[n] + 1 << '\n'; // aitai amar layer count
    return 0;
}