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
    ll l, r;
    cin >> l >> r;
    ll x = (r - l) + 1;
    cout << "YES" << '\n';
    for (ll i = l; i < r; i++)
    {
        cout << i << ' ' << i + 1 << '\n';
        i++;
    }
    // cout << "NO" << '\n';

    return 0;
}