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
// const int N = 1e4 + 9;
// ll a[N], d[N];
void solve()
{
    int n, op;
    cin >> n >> op;
    vector<int> a(n, 0);

    while (op--)
    {
        int l, r, val;
        cin >> l >> r >> val;
        a[l] += val;
        a[r + 1] -= val;
    }
    // for (auto x : a)
    //     cout << x << ' ';
    // cout << '\n';
    for (int i = 1; i <= n; i++)
        a[i] += a[i - 1];
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