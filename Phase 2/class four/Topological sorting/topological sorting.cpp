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

    vector<int> ans;
    // jotokhon na ans ar size n ar somon hocce totokhon ai kaj ta continue kora lagbe

    while (ans.size() < n)
    {
        // kar indegreeree 0 oita khujtci
        int cur = 0;
        for (int i = 1; i <= n; i++)
        {
            // jodi oi node ta visited na hoy tahole ami oitar kace jabo arh khujbo tar indegree 0
            if (!vis[i] and indegree[i] == 0)
            {
                cur = i;
                vis[i] = true;
                break;
            }
        }
        // karon current jodi 0 ase tahole indegree 0 amn kono node present nai tai curr 0 cole asce tai aita possible na topology sort ber kora
        if (cur == 0)
        {
            cout << "Impossible\n";
            return 0;
        }
        ans.push_back(cur);
        // cur vetrix ar sathe joto gula edge connected sob gula disconnected kore dei
        for (auto v : g[cur])
            indegree[v]--;
    }

    for (auto x : ans)
        cout << x << ' ';
    cout << '\n';

    return 0;
}
