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

int32_t main()
{
    MTK;
    int n, m;
    cin >> n >> m;
    // n = pow(2, n); //correct but my recommendation pow function does not use to the value
    // cout << m % n << '\n';
    if (n >= 30)
        cout << m << '\n'; // 2^30 pore inter a ar asbe na amar mod ar value ta integer tai modde ai thakbe
    else
        cout << m % (1 << n) << '\n';
    return 0;
}
