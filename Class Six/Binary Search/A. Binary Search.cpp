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
// const int N = 1e5 + 7;
// int a[N], n;
// bool solve(int l, int r)
// {
//     if (l > r)
//         return false;
//     int mid = (l + r) / 2;
//     if (a[mid] == x)
//         return true;
//     else if (x > a[mid])
//         solve(mid + 1, r);
//     else
//         solve(l, mid - 1);
// }
void solve()
{
}
int32_t main()
{
    MTK;
    int n, k;
    cin >> n >> k;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    while (k--)
    {
        int x;
        cin >> x;
        int l = 1, r = n, fl = 0;
        while (r >= l)
        {
            int mid = (l + r) / 2;
            if (a[mid] == x)
            {
                cout << "YES" << '\n';
                fl = 1;
                break;
            }
            else if (x > a[mid])
                l = mid + 1;
            else
                r = mid - 1;
        }
        if (!fl)
            cout << "NO" << '\n';
    }
}