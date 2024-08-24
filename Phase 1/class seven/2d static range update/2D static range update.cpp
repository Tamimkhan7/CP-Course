#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
const int N = 1000;
int a[N][N], pref[N][N], d[N][N];
int32_t main()
{
    MTK;
    int n, m;
    cin >> n >> m;
    // akta array theke kivabe diffenence array ber korbo
    // aita to kono value sathe kono value difference korte parbo na
    // sei khette amake akta array nibo but dore nibo array ta amar kace nai akhn ami cinta krolam normally update kore queries korlam and prefix sum korlam
    // last a giye just array ta prefix sum ar sathe add kore dibo
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x1, y1, x2, y2, k;
        cin >> x1 >> y1 >> x2 >> y2 >> k;
        d[x1][y1] += k;
        d[x1][y2 + 1] -= k;
        d[x2 + 1][y1] -= k;
        d[x2 + 1][y2 + 1] += k;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            pref[i][j] = pref[i][j - 1] + pref[i - 1][j] - pref[i - 1][j - 1] + d[i][j];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] + pref[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}