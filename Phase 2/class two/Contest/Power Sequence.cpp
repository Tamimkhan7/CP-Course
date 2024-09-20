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

ll ok(vector<ll> a, int c)
{
    ll cost = 0;
    ll cur_pow = 1;

    for (int i = 0; i < a.size(); ++i)
    {
        cost += abs(a[i] - cur_pow);
        if (cur_pow > LLONG_MAX / c)
            break;
        cur_pow *= c;
    }
    // cout << cur_pow << ' ' << cost << ' ' << LLONG_MAX << '\n';
    return cost;
}

int main()
{
    MTK;
    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(all(a));
    ll mn_cost = LLONG_MAX;

    for (int c = 1; c <= 100000; ++c)
    {
        ll cost = ok(a, c);
        mn_cost = min(mn_cost, cost);

        if (cost > mn_cost * 10)
            break;
    }

    cout << mn_cost << endl;

    return 0;
}
