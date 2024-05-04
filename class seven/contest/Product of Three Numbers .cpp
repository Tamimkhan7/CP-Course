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
const int N = 1e9;
void solve()
{
    int n;
    cin >> n;
    for (int i = 2; i * i <= n; i++)
    {
        for (int j = 2; j * j <= n; j++)
        {
            for (int k = 2; k * k <= n; k++)
            {

                int ans = i * j * k;
                if (ans == n and i != j and j != k and i != k)
                {
                    cout << "YES\n";
                    cout << i << ' ' << j << ' ' << k << '\n';
                    return;
                }
            }
        }
    }
    cout << "NO\n";
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