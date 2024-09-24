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

const ll MAX = 1e10;
const int N = 1e5 + 9;
int spf[N];
vector<ll> v[N];

void is_spf()
{
    for (int i = 2; i < N; i++)
        spf[i] = i;
    for (int i = 2; i < N; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i; j < N; j += i)
                spf[j] = min(spf[j], i);
        }
    }
}

int32_t main()
{
    MTK;
    is_spf();

    for (int i = 1; 1LL * i * i <= MAX; i++)
    {
        int x = i;
        int number_of_divisors = 1;
        while (x > 1)
        {
            int p = spf[x], e = 0;
            while (x % p == 0)
            {
                e++;
                x /= p;
            }
            number_of_divisors *= (2 * e + 1);
        }
        v[number_of_divisors].push_back(1LL * i * i);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        ll l, r;
        cin >> k >> l >> r;
        int ans = 0;
        ans = upper_bound(v[k].begin(), v[k].end(), r) - lower_bound(v[k].begin(), v[k].end(), l);
        cout << ans << '\n';
    }
    return 0;
}