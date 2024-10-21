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
int graph[N][N];
int32_t main()
{
    MTK;
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int node, edge;
        cin >> node >> edge;
        graph[node][edge] = 1;
        graph[edge][node] = 1;
    }
    for (int i = 1; i < N; i++)
    {
        for (int j = 1; j < N; j++)
            cout << graph[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}