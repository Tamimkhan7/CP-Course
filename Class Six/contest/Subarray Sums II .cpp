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
    ll a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    ll pre[n + 1];
    pre[0] = 0;
    for (int i = 1; i <= n; i++)
        pre[i] = pre[i - 1] + a[i];

    for (auto x : pre)
        cout << x << ' ';
    cout << '\n';
    int cnt = 0;
    for (auto find : pre)
    {
        if (find >= x)
            cnt++;
    }
    cout << cnt << '\n';
}