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
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        int j = i - 1, x = a[i];
        while (j >= 1 and a[j] > x)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
    }
    for (int i = 1; i <= n; i++)
        cout << a[i] << ' ';
    cout << '\n';
}