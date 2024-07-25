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
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int mask = 0; mask < (1 << n); mask++)
    {
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
                ans += a[i];
            else
                ans -= a[i];
        }
        ans = (ans + 360) % 360;
        if (ans == 0)
        {
            cout << "YES" << '\n';
            return 0;
        }
    }
    cout << "NO" << '\n';
    return 0;
}