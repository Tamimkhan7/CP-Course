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
    int n;
    cin >> n;
    int ans = n;
    if (n >= 10000)
    {
        int p = n - 1000;
        for (int i = n - 1; i >= p; i--)
        {
            ans &= i;
            if (ans == 0)
            {
                cout << i << '\n';
                return;
            }
        }
    }
    else
    {
        for (int i = n - 1; i >= 0; i--)
        {
            ans &= i;
            if (ans == 0)
            {
                cout << i << '\n';
                return;
            }
        }
    }
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}