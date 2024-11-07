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

const int N = 1e3 + 9;
string s[N];
bool vis[N][N], ok = false;
int di[] = {0, -1, 0, 1};
int dj[] = {1, 0, -1, 0};
char dir[] = {'R', 'U', 'L', 'D'};
int n, m;
pair<int, int> parent[N][N];

bool is_valid(int i, int j)
{
    return i >= 0 and i < n and j >= 0 and j < m;
}

void bfs(int i, int j)
{
    queue<pair<int, int>> q;
    q.push({i, j});
    vis[i][j] = true;
    parent[i][j] = {-1, -1};

    while (!q.empty())
    {
        auto [u, v] = q.front();
        q.pop();
        for (int k = 0; k < 4; k++)
        {
            int next_i = u + di[k];
            int next_j = v + dj[k];
            if (is_valid(next_i, next_j) && s[next_i][next_j] == 'B')
            {
                parent[next_i][next_j] = {u, v};
                ok = true;
                int x = next_i, y = next_j;
                string ans = "";
                while (parent[x][y].first != -1)
                {
                    int px = parent[x][y].first;
                    int py = parent[x][y].second;
                    for (int d = 0; d < 4; d++)
                    {
                        if (px + di[d] == x && py + dj[d] == y)
                            ans += dir[d];
                    }
                    x = px;
                    y = py;
                }
                reverse(ans.begin(), ans.end());
                cout << "YES" << '\n'
                     << ans.size() << '\n'
                     << ans << '\n';
                return;
            }
            else if (is_valid(next_i, next_j) && s[next_i][next_j] == '.' && !vis[next_i][next_j])
            {
                q.push({next_i, next_j});
                vis[next_i][next_j] = true;
                parent[next_i][next_j] = {u, v};
            }
        }
    }
}
int32_t main()
{
    MTK;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> s[i];

    int x, y;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == 'A')
                x = i, y = j;
        }
    }
    bfs(x, y);
    if (!ok)
        cout << "NO" << '\n';
}
