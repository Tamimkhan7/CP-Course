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
    int n, k;
    cin >> n >> k;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    while (k--)
    {
        ll x;
        cin >> x;
        int l = 1, r = n, ans = -1, fl = 0;
        while (r >= l)
        {
            int mid = (l + r) / 2;
            if (a[mid] == x)
            {
                ans = mid;
                fl = 1;
                break;
            }
            else if (x > a[mid])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;               
            }
            
        }
        if (ans != -1)
            cout << ans << '\n';
        else
            cout << 0 << '\n';
    }
}
// kicu mistake ace pore dekhbo
