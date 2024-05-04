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
bool check(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
bool ok(int x)
{
    if (x == 1)
        return false;
    int sum = 0;
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            if (x / i == i)
                sum += i;
            else
                sum += x + i / i;
        }
    }
    // cout << x << ' ' << sum << '\n';
    if (check(sum))
        return true;
    else
        return false;
}
void solve()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = a; i <= b; i++)
    {
        if (ok(i))
            ans++;
    }
    cout << ans << '\n';
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