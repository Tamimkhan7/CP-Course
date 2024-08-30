#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long
#define all(x) (x).begin(), (x).end()
const ll N = 1e15;
ll n;
int k;
int32_t main()
{
    MTK;
    cin >> n >> k;
    vector<ll> v;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (i != sqrt(n))
            {
                // cout << i << ' ' << n / i << ' ';
                v.push_back(n / i);
            }
        }
    }
    sort(all(v));
    // cout << '\n';
    if (k > v.size())
        cout << -1 << '\n';
    else
        cout << v[k - 1] << '\n';

    return 0;
}