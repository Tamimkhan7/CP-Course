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
const int N = 2e5;
int pre[N], a[N], change[N];
int32_t main()
{
    MTK;
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= q; i++)
    {
        int l, r;
        cin >> l >> r;
        change[l]++;
        if (r < n)
            change[r + 1]--;
    }
    // sort(change + 1, change + q + 1, greater<int>());

    for (int i = 1; i <= n; i++)
        change[i] += change[i - 1];

    // for (int i = 1; i <= n; i++)
    //     cout << change[i] << ' ';
    // cout << '\n';
    ll sum = 0;
    sort(a + 1, a + n + 1);
    sort(change + 1, change + n + 1);

    for (int i = 1; i <= n; i++)
        sum += (ll)change[i] * a[i];

    cout << sum << '\n';
    return 0;
}
