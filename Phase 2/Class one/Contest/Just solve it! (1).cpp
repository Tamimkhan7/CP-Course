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
const int N = 1e6 + 9;
int spf[N];
int32_t main()
{
    MTK;

    for (int i = 1; i < N; i++)
        spf[i] = i;
    for (int i = 2; i < N; i++)
    {
        for (int k = i; k < N; k += i)
            spf[k] = min(spf[k], i);
    }
    int n;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        int x;
        cin >> x;
        cout << spf[x] << ' ';
        int gpf = 0;
        int dis_prime_factor = 0;
        int total_num_prime_fac = 0;
        int num_of_divisor = 1; // we know that--p1^e1+p2^e2+p3^e3..........pk^ek  --that is find total number of divisor - (e1+1)*(e2+1)*(e3+1).........(ek+1)
        ll sum_of_div = 1;      // we know that--p1^e1+p2^e2+p3^e3..........pk^ek  --that is find total sum of divisor -- (p1^e1-1/p1-1)*(p2^e2-1/p2-1)........(pk^ek-1/pk-1)
        while (x > 1)
        {
            int p = spf[x];
            // smallest prime factor of x
            gpf = max(gpf, p);
            dis_prime_factor++;
            // like 2^3*3^1*5^2,, ai rokom thakle tahole sob gula power bad dile base ta pwa jete pare, tar theke ami max value ta ber kore nite pari
            int total_pow_e = 0, prime_pow = 1;
            while (x % p == 0)
            {
                total_pow_e++;
                total_num_prime_fac++;
                prime_pow *= p; // like 2*2*2 total number of 2 divisor is 3
                x /= p;
            }
            num_of_divisor *= (total_pow_e + 1);
            sum_of_div *= (1LL * prime_pow * p - 1) / (p - 1);
        }
        cout << gpf << ' ';
        cout << dis_prime_factor << ' ';
        cout << total_num_prime_fac << ' ';
        cout << num_of_divisor << ' ';
        cout << sum_of_div << '\n';
        // ll sum = 0, cnt = 0;
        // for (int i = 1; i * i <= x; i++)
        // {
        //     if (x % i == 0)
        //     {
        //         sum += i;
        //         cnt++;
        //         if (i != x / i)
        //         {
        //             sum += x / i;
        //             cnt++;
        //         }
        //     }
        // }
        // vector<int> prime;
        // for (int i = 2; i * i <= y; i++)
        // {
        //     if (y % i == 0)
        //     {
        //         while (y % i == 0)
        //         {
        //             prime.push_back(i);
        //             y /= i;
        //         }
        //     }
        // }

        // if (y > 1)
        //     prime.push_back(y);

        // set<int> se(prime.begin(), prime.end());

        // if (!prime.empty())
        //     cout << prime[0] << ' ' << prime[prime.size() - 1] << ' ' << se.size() << ' ' << prime.size() << ' ' << cnt << ' ' << sum << '\n';
    }

    return 0;
}
