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
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] > a[j])
            {
                cout << i << ' ' << i * (n - j + 1) << '\n';
                ans += i * (n - j + 1);
            }
        }
    }
    cout << '\n';
    cout << ans << '\n';
    return 0;
}