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
// void ok()
// {
//     // vector<int> v(all(v));
//     // sort(all(vv));
//     ll sum = 0, pref = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += 1LL * i * v[i] - pref;
//         pref += v[i];
//         // cout << sum << ' ' << pref << '\n';
//     }
//     cout << -sum << '\n';
// }
int32_t main()
{
    MTK;
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        cout << "Case " << ++cs << ":" << '\n';

        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        ll sum = 0;
        for (int i = 0; i < n; i++)
            sum += 1LL * v[i] * (n - 2 * i - 1);
        // cout << sum << '\n';
        while (q--)
        {
            int x;
            cin >> x;
            if (x == 1)
                cout << sum << '\n';
            else
            {
                int i, x;
                cin >> i >> x;
                sum -= 1LL * v[i] * (n - 2 * i - 1);
                v[i] = x;
                sum += 1LL * v[i] * (n - 2 * i - 1);
            }
        }
    }
    return 0;
}