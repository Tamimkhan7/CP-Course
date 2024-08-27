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
        ll sum = 0;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
                if ((i != n / i) and (n / i < n))
                    sum += n / i;
            }
        }
        cout << sum << '\n';
    }

    return 0;
}