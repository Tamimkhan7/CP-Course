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
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    ll x = *max_element(all(a));

    ll z = 0; // z ar value joto minimum nite pari y value toto maximum howar possiblity bare
    for (int i = 0; i < n; ++i)
        z = __gcd(z, x - a[i]);

    ll y = 0;
    for (int i = 0; i < n; ++i)
        y += (x - a[i]) / z;

    cout << y << " " << z << '\n';
    return 0;
}
