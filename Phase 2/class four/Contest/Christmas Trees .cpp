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

int32_t main()
{
    MTK;
    int n, m;
    cin >> n >> m;
    map<int, int> dis;
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        q.push(x);  // all people are having into queue
        dis[x] = 0; // right now all people became distance is 0
    }
    ll ans = 0;
    vector<int> v;
    while (!q.empty() and m > 0)
    {
        int u = q.front();
        q.pop();
        if (dis.find(u - 1) == dis.end() and m > 0) // that's means is it right now not visited
        {
            dis[u - 1] = dis[u] + 1;
            ans += dis[u - 1];
            v.push_back(u - 1);
            m--;
            q.push(u - 1);
        }
        if (dis.find(u + 1) == dis.end() and m > 0) // that's means is it right now not visited
        {
            dis[u + 1] = dis[u] + 1;
            ans += dis[u + 1];
            v.push_back(u + 1);
            m--;
            q.push(u + 1);
        }
    }
    cout << ans << '\n';
    // answer would be any order that is correct
    for (auto x : v)
        cout << x << ' ';
    cout << '\n';
    return 0;
}