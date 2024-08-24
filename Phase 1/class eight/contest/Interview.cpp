#include <bits/stdc++.h>
using namespace std;
// #define MTK                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define mem(a, b) memset(a, b, sizeof(a))
// #define trace(x) cout << #x << ' ' << x << endl
// #define all(x) (x).begin(), (x).end()
#define ll int long long
// #define mod 1000000007
const int N = 2e5 + 9;
ll a[N], pref[N];
ll ok(int l, int r)
{
    cout << "? " << r - l + 1 << ' ';
    for (int i = l; i <= r; i++)
        cout << i << ' ';
    cout << '\n';
    ll x;
    cin >> x;
    return x;
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pref[i] = pref[i - 1] + a[i];
    }
    int l = 1, r = n;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (ok(l, mid) > pref[mid] - pref[l - 1])
            r = mid;
        else
            l = mid + 1;
    }
    cout << "! " << l << '\n';
}
int32_t main()
{
    // MTK;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}