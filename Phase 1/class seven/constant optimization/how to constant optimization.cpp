#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n = 6e8; // for small n it doesn't make much difference
    // int mod = 1e9 + 7;
    const int mod = 1e9 + 7; // try this
    int ans = 0;
    auto st = clock();
    for (int i = 1; i <= n; i++)
    {
        ans += i;
        // ans %= mod;
        if (ans >= mod)
            ans -= mod; // try this
    }
    cout << ans << '\n';
    cout << fixed << setprecision(10) << "Time: " << 1.0 * (clock() - st) / CLOCKS_PER_SEC << '\n';
    return 0;
}