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
const int N = 1e5 + 9;
ll a[N], d[N];
void solve()
{
    int n, op;
    cin >> n >> op;
    // vector<int> v(n, 0);
    // for (int i = 0; i < n; i++)
    //     d[i] = a[i] - a[i - 1];
    while (op--)
    {
        int l, r, val;
        cin >> l >> r >> val;
        d[l] += val;
        d[r + 1] -= val;
    }
    for (int i = 0; i < n; i++)
        a[i] = a[i - 1] + d[i];
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        cout << a[x] << '\n';
    }
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}