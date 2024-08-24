#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

int32_t main()
{
    MTK;

    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v));
    reverse(all(v));
    // for (auto x : v)
    //     cout << x << ' ';
    // cout << '\n';
    ll x;
    cin >> x;

    ll mn = v[n - 1], ans = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        ll temp = x;
        for (int j = 0; j < n; j++)
        {
            if ((1 << j) & i)
                temp = temp % v[j];
        }
        temp %= mn;
        ans = max(temp, ans);
    }
    cout << ans << '\n';

    return 0;
}
