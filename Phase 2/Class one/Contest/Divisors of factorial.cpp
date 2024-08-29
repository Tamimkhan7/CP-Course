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
const int mod = 1e9 + 7;

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact = (fact * i) % mod;
            fact %= mod;
        }
        int ans = 0;
        for (int i = 1; i * i <= fact; i++)
        {
            if (fact % i == 0)
            {
                ans++;
                if (i != fact / i)
                    ans++;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}