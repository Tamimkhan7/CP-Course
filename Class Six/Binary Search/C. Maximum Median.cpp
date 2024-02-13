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
const int N = 2e5 + 9;
int n, k, a[N];
bool f(int x)
{
    ll min_operation = 0;
    for (int i = (n + 1) / 2; i <= n; i++)
    {
        if (a[i] < x)
            min_operation += x - a[i];
    }
    return min_operation <= k;
}
int32_t main()
{
    MTK;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    int ans, l = 0, r = 2e9;
    while (l <= r)
    {
        int mid = (1LL * l + r) / 2;
        // cout << mid << '\n';
        if (f(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << '\n';
}

/* int ans, l = 0, r = 2e9;
    while (f(x))
    {
        ans = x;
        x++;
    }
    cout << ans << '\n';*/