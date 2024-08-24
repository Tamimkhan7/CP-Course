#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    int cs = 0;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        ll ans = 0;
        sort(all(v));

        vector<ll> power(n, 1);
        for (int i = 1; i < n; i++)
            power[i] = (power[i - 1] * 2) % mod;

        for (int i = 0; i < n; i++)
        {
            ans = (ans + v[i] * (power[i] - 1)) % mod;
            ans = (ans - v[i] * (power[n - 1 - i] - 1) + mod) % mod;
        }

        cout << "Case #" << ++cs << ": ";
        cout << ans << '\n';
    }
    return 0;
}

// int32_t main()
// {
//     MTK;
//     int t;
//     cin >> t;
//     int cs = 0;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for (int i = 0; i < n; i++)
//             cin >> v[i];
//         ll ans = 0;
//         sort(all(v));
//         for (int i = 0; i < n - 1; i++)
//         {
//             int x = 1;
//             for (int j = i + 1; j < n; j++)
//             {
//                 ans += (1LL * (1LL * v[j] - v[i]) * x) % mod;
//                 // cout << v[j] - v[i] << '\n';
//                 x *= 2;
//                 ans %= mod;
//             }
//         }
//         cout << "Case #" << ++cs << ": ";
//         cout << ans << '\n';
//     }
//     return 0;
// }