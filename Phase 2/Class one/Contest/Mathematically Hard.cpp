
// Euler Totient or Phi Function formula is --- n*((p1-1)/p1)*((p2-1)/p2)......................((pk-1)/pk)

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
const int N = 5e6 + 9;
int spf[N];
unsigned long long pref_sum[N];

int32_t main()
{
    MTK;

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

    for (int i = 1; i < N; i++)
    {
        int x = i, res = 1;
        while (x > 1)
        {
            int p = spf[x], e = 0, pw = 1; // score(x) = n^2
            while (x % p == 0)
            {
                e++;
                pw *= p;
                x /= p;
            }
            res *= (pw / p) * (p - 1); // p^(e-1)*(p-1)
        }
        pref_sum[i] = pref_sum[i - 1] + 1LL * res * res;
    }
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << "Case " << ++cs << ": " << pref_sum[b] - pref_sum[a - 1] << '\n';
    }

    return 0;
}