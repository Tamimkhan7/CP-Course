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
int get_msb(int x)
{
    return __lg(x);
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> cnt(30, 0);
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            int k = get_msb(x);
            cnt[k]++;
        }
        // for (int i = 0; i < 30; i++)
        // {
        //     cout << i << ' ' << cnt[i] << '\n';
        // }
        ll ans = 0;
        for (int i = 0; i < 30; i++)
        {
            ans += 1LL * cnt[i] * (cnt[i] - 1) / 2; // cnt ar modde joto gula all pair kora jay oitaii niteci
        }
        cout << ans << '\n';
    }
    return 0;
}