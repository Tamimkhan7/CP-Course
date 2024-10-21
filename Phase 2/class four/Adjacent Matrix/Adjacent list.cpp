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
const int N = 10;
vector<int> g[N];
int indegree[N], outdegree[N];
int32_t main()
{
    MTK;
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        // jodi bidirection ase tahole both hobe
        indegree[u]++;  // how much are indegree are include this program that are count
        outdegree[v]++; // how much are outdegree are include this program that are count
        g[u].push_back(v);
        g[v].push_back(u);
        // jodi direction ase tahole just akta dibo
        // g[u].push_back(v);
    }
    // ith node ke ace aita ber kora jay easily
    for (auto x : g[4])
        cout << x << ' ';
    cout << '\n';
    // find number of degree of ith positon
    for (int i = 1; i <= n; i++)
        cout << i << " => " << g[i].size() << '\n';

    return 0;
}