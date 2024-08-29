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
void solve()
{
    int p, l;

    cin >> p >> l;
    ll x = p - l;
    if (l * 2 >= p) // khaice and baki ace tader sokha jodi tori korar ceye besi hoye jay tahole aita kono vabe possible na
    {
        cout << "impossible" << '\n';
        return;
    }
    vector<ll> v;
    for (ll i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            v.push_back(i);
            if (i != x / i)
                v.push_back(x / i);
        }
    }

    // for (auto x : v)
    //     cout << x << ' ';
    // cout << '\n';
    sort(all(v));
    for (auto x : v)
    {
        if (x > l)
            cout << x << ' ';
    }
    cout << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    int cs = 0;
    while (t--)
    {
        cout << "Case " << ++cs << ": ";
        solve();
    }
    return 0;
}