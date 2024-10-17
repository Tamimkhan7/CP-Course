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

const int N = 1e5 + 9, B = 30;
int a[N], r[N], l[N], required[N], ans[N], f[N];
int t[4 * N];

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = ans[b];
        return;
    }
    int mid = (b + e) / 2, l = n * 2, r = n * 2 + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = (t[l] & t[r]);
}

int query(int n, int b, int e, int i, int j)
{
    if (i > e or j < b)
        return (1 << B) - 1; // all bit zero kore dicci,, amar structure purpose
    if (i <= b and j >= e)
        return t[n];
    int mid = (b + e) / 2, l = n * 2, r = n * 2 + 1;
    return (query(l, b, mid, i, j) & query(r, mid + 1, e, i, j));
}

int32_t main()
{
    MTK;
    int n, con;
    cin >> n >> con;
    for (int i = 1; i <= con; i++)
        cin >> l[i] >> r[i] >> required[i];

    for (int k = 0; k < B; k++)
    {
        for (int i = 1; i <= n; i++)
            f[i] = 0; // make all bit are zero
        for (int i = 1; i <= con; i++)
        {
            if ((required[i] >> k) & 1)
            {
                // [l-- --r] means l++, but(r + 1)--
                f[l[i]]++;
                f[r[i] + 1]--;
            }
        }
        // ok my prefix sum
        //  make all bit are one at [l-- - r]
        for (int i = 1; i <= n; i++)
            f[i] += f[i - 1];

        for (int i = 1; i <= n; i++)
        {
            // jodi kono bit 1 thake tahole or power ar value add kore dicci, mane OR kore dicci
            if (f[i] > 0)
            {
                ans[i] |= 1 << k; // make the kth bit of ith index on
                // cout << i << ' ' << ans[i] << '\n';
            }
        }
    }
    // [0 0 0 0  1 1 1 1 0 0 1 1 1 0 1 0 1 0 0] ai vabe sajano hoice just build function dara
    build(1, 1, n);

    for (int i = 1; i <= con; i++)
    {
        int cur_and = query(1, 1, n, l[i], r[i]);
        if (cur_and != required[i])
        {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    for (int i = 1; i <= n; i++)
        cout << ans[i] << ' ';
    cout << '\n';
    return 0;
}