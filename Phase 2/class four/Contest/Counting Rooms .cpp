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
bool vis[N][N];
int di[] = {0, -1, 0, 1};
int dj[] = {1, 0, -1, 0};
int n, m;

bool is_valid(int i, int j)
{
    return i >= 0 and i < n and j >= 0 and j < m;
}

void dfs(int i, int j)
{
    vis[i][j] = true;
    for (int k = 0; k < 4; k++)
    {
        int next_i = i + di[k];
        int next_j = j + dj[k];
        if (is_valid(next_i, next_j) and s[next_i][next_j] == '.' and !vis[next_i][next_j])
            dfs(next_i, next_j);
    }
}
int32_t main()
{
    MTK;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> s[i];

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == '.' and !vis[i][j])
            {
                dfs(i, j);
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            vis[i][j] = false;
    }
}
