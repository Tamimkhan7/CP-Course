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
int a[N];
int32_t main()
{
    MTK;
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    // sort(a, a + n);
    map<ll, int> l, r;
    for (int i = 1; i <= n; i++)
        r[a[i]]++;
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int x = a[i];
        r[x]--;
        if (x % k != 0)
        {
            l[x]++;
            continue;
        }
        int f = x / k;
        ll res = 1LL * k * x;
        ans += 1LL * l[f] * r[res];
        l[x]++;
    }
    cout << ans << '\n';
    return 0;
}