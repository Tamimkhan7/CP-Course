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
    int layer = 0;
    while (!q.empty())
    {
        int u = q.front(); // 1 ace dore nilam
        // cout << u << '\n';
        q.pop();
        // layer++;
        for (auto v : g[u])
        {
            if (!visi[v])
            {
                q.push(v);
                visi[v] = true;
            }
        }
    }
   
    // cout << layer << '\n';
    return 0;
}