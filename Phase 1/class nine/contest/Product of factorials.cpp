#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define i128 __int128
const int N = 1e7 + 9;
ll mod = 109546051211;
ll fact[N];
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    fact[0] = 1;
    for (int i = 1; i < N; i++)
        fact[i] = 1LL * fact[i - 1] * i % mod;
    ll ans = 1;
    for (int i = 1; i <= n; i++)
        ans = (i128)ans * fact[i] % mod;
    cout << ans << '\n';
    return 0;
}