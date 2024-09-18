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
#define mod 1000000007
const ll N = 1e10;
vector<ll> sqrt_value;
int k;

// const int N = 1e5 + 9;
// int d[N];
// void divisor()
// {
//     for (int i = 1; i <= N; i++)
//     {
//         for (int j = i; j <= N; j += i)
//             d[j]++;
//     }
//     for (int i = 1; i <= n; i++)
//         cout << i << ' ' << d[i] << '\n';
// }

bool divisor(ll n)
{
    int cnt = 0;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if (i != n / i)
                cnt++;
        }
    }
    return cnt == k;
}

int32_t main()
{
    MTK;
    for (ll i = 2; i * i <= N; i++)
    {
        if (i * i <= N)
            sqrt_value.push_back(i * i);
    }
    // cout << sqrt_value.size() << '\n';
    // cout << '\n';

    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> k >> l >> r;
        // auto lw = lower_bound(all(sqrt_value), l);
        // auto up = upper_bound(all(sqrt_value), l);
        // cout << lw - sqrt_value.begin() << ' ' << *up << '\n';
        ll cnt = 0;
        for (auto x : sqrt_value)
        {
            if (x >= l and x <= r)
            {
                if (divisor(x))
                    cnt++;
            }
            if (x > r)
                break;
        }

        cout << cnt << '\n';
    }

    return 0;
}
