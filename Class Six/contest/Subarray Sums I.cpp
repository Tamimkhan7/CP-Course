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
    int n, x;
    cin >> n >> x;
    int px[n + 1], a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    px[0] = 0;
    for (int i = 1; i <= n; i++)
        px[i] = a[i] + px[i - 1];
    for (auto x : px)
        cout << x << ' ';
    cout << '\n';
    // cout << px[n] << '\n';
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int ans = px[n] - px[i];
        // cout << ans << '\n';
        if (ans > x)
            cnt++;
    }
    cout << cnt << '\n';
}