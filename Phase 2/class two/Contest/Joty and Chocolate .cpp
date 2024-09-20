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
    int n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    int p_cnt, q_cnt;
    p_cnt = n / a;
    q_cnt = n / b;
    int a_b_both_div = n / ((1LL * a * b) / __gcd(a, b)); // both divisor count = n/lcm(a,b)
    if (p > q)
        q_cnt -= a_b_both_div;
    else
        p_cnt -= a_b_both_div;
    // cout << p_cnt << ' ' << q_cnt << '\n';
    ll ans = 1LL * p_cnt * p + 1LL * q_cnt * q;
    cout << ans << '\n';
    return 0;
}