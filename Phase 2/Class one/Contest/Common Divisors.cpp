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
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v));
    ll gcd = 0;

    for (auto x : v)
        gcd = __gcd(gcd, x); // find greatest common divisor
    ll ans = 0;
    for (ll i = 1; i * i <= gcd; i++)
    {
        if (gcd % i == 0)
        {
            ans++;
            if (i != gcd / i)
                ans++;
        }
    }

    cout << ans << '\n';
    return 0;
}