#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
const int N = 1e5 + 5;
int l[N], r[N], x[N], op[N];
ll a[N], d[N];
int32_t main()
{
    MTK;
    int m, k, n;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    // find differents between to the array value
    for (int i = 1; i <= n; i++)
        d[i] = a[i] - a[i - 1];

    for (int i = 1; i <= m; i++)
        cin >> l[i] >> r[i] >> x[i];
    // how much operation needed to the piece of paper
    while (k--)
    {
        int l, r;
        cin >> l >> r;
        op[l]++;
        op[r + 1]--;
    }
    // count the total number of operation that is needed for the grey
    for (int i = 1; i <= m; i++)
        op[i] += op[i - 1];

    // for (auto x : op)
    //     cout << x << ' ';
    // cout << '\n';

    // how much operation needed,that the find result to the i used prefix sum
    for (int i = 1; i <= m; i++)
    {
        d[l[i]] += 1LL * x[i] * op[i];
        d[r[i] + 1] -= 1LL * x[i] * op[i];
    }
    // last total operation needed to the value purpose, lastly i added to the number of operation needed
    for (int i = 1; i <= n; i++)
    {
        d[i] += d[i - 1];
        cout << d[i] << ' ';
    }
    cout << '\n';

    return 0;
}
