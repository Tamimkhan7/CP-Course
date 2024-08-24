#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007

int32_t main()
{
    MTK;
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    auto get_sum = [&](int x, int y)
    {
        return x * m + y;
    };
    int f[n * m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            f[get_sum(i, j)] = arr[i][j];
        }
    }
    for (int i = 0; i < n * m; i++)
        cout << f[i] << ' ';
    cout << '\n';
}