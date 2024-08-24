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
const int mod = 998244353;

int32_t main()
{
    MTK;
    int w, h;
    cin >> w >> h;
    int ans = 1;
    for (int i = 1; i <= (w + h); i++)
        ans = 1LL * ans * 2 % mod;

    cout << ans << '\n';
    return 0;
}