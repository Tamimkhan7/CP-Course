#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define all(x) (x).begin(), (x).end()

int32_t main()
{
    MTK;
    ll n;
    cin >> n;
    vector<ll> div;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            div.push_back(i);
            if (i != n / i)
                div.push_back(n / i);
        }
    }
    sort(div.begin(), div.end());
    vector<pair<ll, ll>> ans;
    for (int i = 0; i < div.size() / 2; i++)
    {
        ll x = div[i];
        ll val = n / x;
        if (find(all(div), val) != div.end())
            ans.push_back(make_pair(val, x));
    }
    // reverse(all(ans));
    // for (auto [x, y] : ans)
    //     cout << x << ' ' << y << '\n';

    while (!ans.empty())
    {
        ll a = ans.back().first;
        ll b = ans.back().second;
        ll lcm = a * b / __gcd(a, b);
        if (lcm == n)
        {
            cout << a << ' ' << b << '\n';
            return 0;
        }
        ans.pop_back();
    }
    cout << 1 << ' ' << n << '\n';
    return 0;
}
