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

int solve(ll n, ll p)
{
    int ans = 0;
    while (n)
    {
        ans += n / p;
        n /= p;
    }
    return ans;
}
int32_t main()
{
    MTK;
    ll n, p;
    cin >> n >> p;
    cout << solve(n, p) << '\n';

    return 0;
}