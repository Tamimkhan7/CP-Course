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

const int N = 25;
string s[N];
bool vis[N][N];
int di[] = {0, -1, 0, 1};
int dj[] = {1, 0, -1, 0};
int n, m, cnt;

bool is_valid(int i, int j)
{
    return i >= 0 and i < n and j >= 0 and j < m;
}
 
void dfs(int i, int j)
{
    cnt++;
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
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        for (int i = 0; i < n; i++)
            cin >> s[i];

        int inti_i = 0, inti_j = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (s[i][j] == '@')
                    inti_i = i, inti_j = j;
            }
        }
        cnt = 0;
        dfs(inti_i, inti_j);
        cout << "Case " << ++cs << ": " << cnt << '\n';

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                vis[i][j] = false;
        }
    }
    return 0;
}