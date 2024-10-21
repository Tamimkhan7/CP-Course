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
int indegree[N];
bool vis[N];

int32_t main()
{
    MTK;
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        indegree[v]++;
        g[u].push_back(v);
    }
    // jei gula indegree zero oi gula agei count kore rakhi
    vector<int> in_deg_zero;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i] and indegree[i] == 0)
        {
            in_deg_zero.push_back(i);
            vis[i] = true;
        }
    }
    sort(all(in_deg_zero), greater<int>()); // aita just amar iccha korci,, matter kortece na

    vector<int> ans;
    while (ans.size() < n)
    {
        if (in_deg_zero.size() == 0)
        {
            cout << "Impossible\n";
            return 0;
        }
        int cur = in_deg_zero.back(); // kare niteci matter kortece na
        in_deg_zero.pop_back();

        ans.push_back(cur);
        for (auto v : g[cur])
        {
            indegree[v]--;
            if (!vis[v] and indegree[v] == 0)
            {
                in_deg_zero.push_back(v);
                vis[v] = true;
            }
        }
    }

    for (auto x : ans)
        cout << x << ' ';
    cout << '\n';

    return 0;
}
