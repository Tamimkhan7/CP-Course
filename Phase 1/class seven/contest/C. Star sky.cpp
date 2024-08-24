#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
const int N = 105 + 7; // maximum numbers of stars
const int C = 105;     // maximum coordinates range (+1 for 1-Indexed)
const int P = 15;      // maximum brightness level (+1)
int cnt[P][C][C];
int n, q, c;
int32_t main()
{
    MTK;
    cin >> n >> q >> c;
    for (int i = 0; i < n; i++)
    {
        int x, y, s;
        cin >> x >> y >> s;
        cnt[s][x][y]++;
    }
    for (int i = 0; i <= c; i++)
    {
        for (int j = 0; j < C; j++)
        {
            for (int k = 0; k < C; k++)
                cnt[i][j][k] += cnt[i][j - 1][k] + cnt[i][j][k - 1] - cnt[i][j - 1][k - 1];
        }
    }
    for (int i = 0; i < q; i++)
    {
        int ans = 0;
        int t, x1, y1, x2, y2;
        cin >> t >> x1 >> y1 >> x2 >> y2;
        for (int i = 0; i <= c; i++)
        {
            int bri = (i + t) % (c + 1);
            int amount = cnt[i][x2][y2] - cnt[i][x1 - 1][y2] - cnt[i][x2][y1 - 1] + cnt[i][x1 - 1][y1 - 1];
            ans += bri * amount;
        }
        cout << ans << '\n';
    }
    return 0;
}