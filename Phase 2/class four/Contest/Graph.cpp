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
const int N = 105;
int a[N][N];
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    mem(a, 0);
    for (int i = 0; i < n; i++)
    {
        int u, k;
        cin >> u >> k;
        for (int i = 0; i < k; i++)
        {
            int v;
            cin >> v;
            a[u - 1][v - 1] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j];
            if (j == n - 1)
                cout << "\n";
            else
                cout << ' ';
        }
    }

    return 0;
}