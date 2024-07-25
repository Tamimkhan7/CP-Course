// solve brute force approach

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
int n, m, k;
bool ok(int x, int y)
{
    int bit_different = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int a = (x >> i) & 1;
    //     int b = (y >> i) & 1;
    //     if (a != b)
    //         bit_different++;
    // }
    bit_different = __builtin_popcount(x ^ y); // koto gula set bit ace oita count korteci, karon amra jani two ta number xor korte jei gula different oi gula just set hoy ar set bit count korte building function ace
    return bit_different <= k;
}
int32_t main()
{
    MTK;
    cin >> n >> m >> k;
    int a[m + 2];
    for (int i = 1; i <= m + 1; i++)
        cin >> a[i];
    int ans = 0;
    for (int i = 1; i <= m; i++)
        ans += ok(a[i], a[m + 1]); // Fedor cilo m+1 number value ta, tar sathe baki value gula compare korte bolce jodi tader bit ar difference k ar kom hoy tahole oy friend hote parbe

    cout << ans << '\n';
    return 0;
}