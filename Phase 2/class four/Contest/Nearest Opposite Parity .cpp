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

const int N = 2e5 + 9, inf = 1e9;
vector<int> g[N];
int a[N], n, ans[N];

void solve(vector<int> even, vector<int> odd)
{
    vector<int> dis(n + 1, inf);
    queue<int> q;
    for (auto x : even)
    {
        q.push(x);
        dis[x] = 0;
    }
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto v : g[u])
        {
            if (dis[u] + 1 < dis[v])
            {
                dis[v] = dis[u] + 1;
                q.push(v);
            }
        }
    }
    for (auto v : odd)
        ans[v] = dis[v];
}

int32_t main()
{
    MTK;
    cin >> n;
    vector<int> even, odd;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even.push_back(i);
        else
            odd.push_back(i);

        if (i - a[i] >= 1)
            g[i - a[i]].push_back(i); // reverse edge
        if (i + a[i] <= n)
            g[i + a[i]].push_back(i); // reverse edge
    }
    for (int i = 1; i <= n; i++)
        ans[i] = inf;

    solve(even, odd);
    solve(odd, even);
    for (int i = 1; i <= n; i++)
    {
        if (ans[i] == inf)
            ans[i] = -1;
        cout << ans[i] << ' ';
    }
    cout << '\n';
    return 0;
}