#include <bits/stdc++.h>
using namespace std;
const int mod = 998244353;
const int N = 3e5 + 5;
typedef long long ll;
int a[N];

int main()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    ll ans = 0;
    for (ll bit = 0; bit < 31; bit++)
    {
        ll cnt = 0, cnt0 = 1, cnt1 = 0, sum0 = 1, sum1 = 0, p = 0;
        for (ll i = 1; i <= n; i++)
        {
            p ^= a[i];
            if (p >> bit & 1)
            {
                cnt += sum0;
                cnt1++;
            }
            else
            {
                cnt += sum1;
                cnt0++;
            }
            sum0 += cnt0;
            sum1 += cnt1;
        }
        ans += cnt % mod * (1 << bit) % mod;
        ans %= mod;
    }
    cout << ans << '\n';
}
