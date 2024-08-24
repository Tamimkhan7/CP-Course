#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
const int N = 1005;
char a[N][N];
int pre[N][N];
int main()
{
    MTK;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        pre[x1][y1] += 1, pre[x2 + 1][y2 + 1] += 1;
        pre[x2 + 1][y1] -= 1, pre[x1][y2 + 1] -= 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            pre[i][j] += pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1];
        }
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= m; j++)
    //     {
    //         cout << pre[i][j];
    //     }
    //     cout << '\n';
    // }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (pre[i][j] & 1)
                a[i][j] ^= 1;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << a[i][j];
        }
        cout << '\n';
    }
    return 0;
}
