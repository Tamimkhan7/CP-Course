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
    int n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll red = (n / a);
    ll blue = (n / b);
    int both = n / ((1LL * a * b) / __gcd(a, b));
    if (p > q)
        blue -= both;
    else
        red -= both;
    red = 1LL * red * p;
    blue = 1LL * blue * q;
    cout << red + blue << '\n';
    return 0;
}