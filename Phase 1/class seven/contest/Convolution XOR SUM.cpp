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
    int n;
    cin >> n;
    vector<int> a(n), b(n), cnt(30);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int ok = 1;
    for (int i = 1; i < n; i++)
        ok = (1LL * ok * i) % mod;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if ((a[i] >> j) & 1)
                cnt[j]++;
        }
    }
    int x = 0;
    // for (auto &xx : cnt)
    //     cout << ++x << ' ' << xx << '\n';
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            ll contrib = (1LL * ok * (1 << j)) % mod;
            if ((b[i] >> j) & 1)
                ans += (n - cnt[j]) * contrib % mod;
            else
                ans += cnt[j] * contrib % mod;
            ans %= mod;
        }
    }
    cout << ans << '\n';

    return 0;
}