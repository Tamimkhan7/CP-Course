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
ll multiple_of_under_n(ll k, ll n)
{
    return n / k; // how much multiple of under n that call are c.lcm<=r// c = r/lcm //floor of r/lcm value
}
ll solve(ll k, ll l, ll r)
{
    return multiple_of_under_n(k, r) - multiple_of_under_n(k, l - 1); // first 1 to n all multiple find korci then  1 to l-1  ar multiple bad diye dici karon using prefix sum formula used
}
int32_t main()
{
    MTK;
    ll n, m, l, r;
    cin >> n >> m >> l >> r;
    // ll lcm = (n * m) / __gcd(n, m);ai vabe thakle overflow hoye jabe
    ll g = __gcd(n, m);                              // n-1e18 and m = 1e18 two ta 1e18  ar gcd 1e18 modde ai hoye aita kono vabe overflow hobe na
    if (((long double)n / g) > ((long double)r / m)) // value gula long long ar modde store hobe but safe zone asar jonno long double nile better hoy
    {
        cout << 0 << '\n';
        return 0;
    }
    ll k = (n / g) * m; // just format with the gcd,,ai vabe ar overflow hobe na asha kori
    cout << solve(k, l, r) << '\n';
    return 0;
}