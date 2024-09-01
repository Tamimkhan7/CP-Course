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
const int N = 5e5 + 9;
ll spf[N], sum_of_div[N];
int32_t main()
{
    MTK;
    // for (int i = 1; i < N; i++)
    //     spf[i] = i;
    // for (int i = 2; i < N; i++)
    // {
    //     for (int k = i; k < N; k += i)
    //         spf[k] = min(spf[k], i);
    // }
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int x;
    //     cin >> x;
    //     int y = x;
    //     ll sum_of_div = 1; // we know that--p1^e1+p2^e2+p3^e3..........pk^ek  --that is find total sum of divisor -- (p1^e1-1/p1-1)*(p2^e2-1/p2-1)........(pk^ek-1/pk-1)
    //     while (x > 1)
    //     {
    //         int p = spf[x];
    //         int prime_pow = 1;
    //         while (x % p == 0)
    //         {
    //             prime_pow *= p;
    //             x /= p;
    //         }
    //         sum_of_div *= (1LL * prime_pow * p - 1) / (p - 1);
    //     }
    //     cout << sum_of_div - y << '\n';
    // }

    // using sieve style solve the problem

    for (int i = 1; i < N; i++)
    {
        for (int j = i; j < N; j += i)
            sum_of_div[j] += i;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << sum_of_div[n] - n << '\n';
    }
    return 0;
}