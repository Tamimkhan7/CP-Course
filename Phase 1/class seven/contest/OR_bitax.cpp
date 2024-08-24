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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll ans = 0;
        // vector<ll> v(n + 2), pref_xor(n + 2), pref(n + 2);
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            ans |= a;
        }
        // pref_xor[0] = 0;
        // for (int i = 1; i <= n; i++)
        //     pref_xor[i] = pref_xor[i - 1] ^ v[i];
        // ll mx = *max_element(all(pref_xor));
        // pref[0] = 0;
        // for (int i = 1; i <= n; i++)
        //     pref[i] = pref[i - 1] ^ pref_xor[i];
        // ll mx2 = *max_element(all(pref));
        // for (auto x : pref_xor)
        //     cout << x << ' ';
        // cout << '\n';
        cout << ans << '\n';
    }
    return 0;
}