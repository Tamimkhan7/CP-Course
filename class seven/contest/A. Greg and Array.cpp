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
const int N = 1e5 + 9;
int op[N], l[N], x[N], r[N];
ll a[N], d[N];
int32_t main()
{
    MTK;
    int n, m, q;
    cin >> n >> m >> q;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        d[i] = a[i] - a[i - 1];

    for (int i = 1; i <= m; i++)
        cin >> l[i] >> r[i] >> x[i];

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        op[l]++;
        op[r + 1]--;
    }
    // for (int i = 1; i <= m; i++)
    //     cout << op[i] << ' ';
    // cout << '\n';
    // total operation needed prefix sum kore rakhlam
    for (int i = 1; i <= m; i++)
        op[i] += op[i - 1];
    // for (int i = 1; i <= m; i++)
    //     cout << op[i] << ' ';
    // cout << '\n';

    for (int i = 1; i <= m; i++)
    {
        d[l[i]] += 1LL * x[i] * op[i];
        d[r[i] + 1] -= 1LL * x[i] * op[i];
    }
    // cover prefix sum
    for (int i = 1; i <= n; i++)
    {
        d[i] += d[i - 1];
        cout << d[i] << ' ';
    }
    cout << '\n';
    return 0;
}