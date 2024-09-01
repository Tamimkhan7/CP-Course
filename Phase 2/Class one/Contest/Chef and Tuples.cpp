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
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        vector<int> divs;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                divs.push_back(i);
                if (i != n / i)
                    divs.push_back(n / i);
            }
        }
        // for (auto x : divs)
        //     cout << x << ' ';
        // cout << '\n';
        int ans = 0; // x*y*z==n// z = n/(x*y)
        for (auto x : divs)
        {
            if (x <= a)
            {
                for (auto y : divs)
                {
                    if (y <= b)
                    {
                        if (n % (1LL * x * y) == 0)
                        {
                            int z = n / (x * y);
                            if (z <= c)
                                ans++;
                        }
                    }
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}