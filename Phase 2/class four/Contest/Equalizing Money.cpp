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
const int N = 1005;
vector<int> g[N];
int money[N];
bool vis[N];
int total_money, total_person;

void dfs(int u)
{
    vis[u] = true;
    total_person++;
    total_money += money[u];
    for (auto v : g[u])
    {
        if (!vis[v])
            dfs(v);
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> money[i];
        g[i].clear();
        vis[i] = false;
    }
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    set<int> se;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            total_money = total_person = 0;
            dfs(i);
            if (total_money % total_person == 0)
            {
                int each_person_get_money = total_money / total_person;
                se.insert(each_person_get_money);
            }
            else
            {
                cout << "No" << '\n';
                return;
            }
        }
    }
    if (se.size() == 1)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
}
int32_t main()
{
    MTK;
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        cout << "Case " << ++cs << ": ";
        solve();
    }
    return 0;
}