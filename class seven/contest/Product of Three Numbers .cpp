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
    for (int i = 2; i * i <= (n); i++)
    {
        if (n % i == 0)
        {
            n /= i;
            for (int j = i + 1; j * j <= n; j++)
            {
                if (n % j == 0 and (n / j) > j)
                {
                    cout << "YES" << '\n';
                    cout << i << ' ' << j << ' ' << n / j << '\n';
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