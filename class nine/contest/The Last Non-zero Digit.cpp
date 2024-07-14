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
const int mod = 1e9;
ll reduce(ll x)
{
    while (x > 0 and (x % 10 == 0)) // drop all last 0's digit
        x /= 10;
    return x % mod; // amar value ta onek boro hoye jete pare tai 1e9+7 diye mod kore niyeci
}
int32_t main()
{
    MTK;
    int n, m;
    while (cin >> n >> m)
    {
        // permutation formula : n!/(n-r)!-- n!+(n-1)+(n-2)+(n-3)...............(n-m+1)+(n-m+2)/(n-m+2) //last two ta kata baki thake jei gula oitai  count korle answer pabo
        ll ans = 1;
        for (int i = n; i >= (n - m + 1); i--)
        {
            ans *= i;
            ans = reduce(ans);
        }
        cout << ans % 10 << '\n';
    }
    return 0;
}