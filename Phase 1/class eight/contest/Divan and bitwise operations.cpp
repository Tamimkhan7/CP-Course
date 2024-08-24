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

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m;
        int total_or_value = 0;
        for (int i = 0; i < m; i++)
        {
            int l, r, x;
            cin >> l >> r >> x;
            total_or_value |= x;
        }
        int ans = 1;
        for (int i = 1; i < n; i++)
            ans = (ans * 2) % mod;
        cout << (1LL * ans * total_or_value) % mod << '\n';
    }
    return 0;
}