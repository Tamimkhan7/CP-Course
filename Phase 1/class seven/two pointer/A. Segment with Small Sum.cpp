#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
const int N = 1e5 + 9;
int a[N];
int32_t main()
{
    MTK;
    ll n, s;
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int ans = 0, j = 1;
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        while (j <= n and sum + a[j] <= s)
        {
            sum += a[j];
            j++;
        }
        // cout<<j-1<<' ';
        // jodi besi hoye jay tahole to amar last ta bad diye deoya better
        ans = max(ans, j - i);
        sum -= a[i];
    }
    // cout << '\n';
    cout << ans << "\n";

    return 0;
}