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
ll k;
const ll N = 1e10;
bool ok(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if (i != n / i)
                cnt++;
        }
    }
    return cnt == k;
}
int32_t main()
{
    MTK;
    vector<int> sq;
    for (int i = 2; i <= 1e5 + 9; i++)
    {
        if (i * i <= N)
            sq.push_back(i * i);
        else
            break;
    }
    cout << sq.size() << '\n';
    for (auto x : sq)
        cout << x << ' ';
    cout << '\n';
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     ll l, r;
    //     cin >> k >> l >> r;
    //     int cnt = 0;
    //     for (ll i = l; i <= r; i++)
    //     {
    //         if (ok(i))
    //         {
    //             cout << i << ' ';
    //             cnt++;
    //         }
    //     }
    //     cout << '\n';
    //     cout << cnt << '\n';
    // }
    return 0;
}