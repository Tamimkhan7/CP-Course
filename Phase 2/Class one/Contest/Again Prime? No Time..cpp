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

const int N = 1e4 + 9;
bool is_prime[N];
vector<int> prime;
void sieve()
{
    is_prime[1] = false;
    for (int i = 2; i < N; i++)
        is_prime[i] = true;
    for (int i = 2; i * i < N; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j < N; j += i)
                is_prime[j] = false;
        }
    }
    for (int i = 1; i < N; i++)
    {
        if (is_prime[i])
            prime.push_back(i);
    }
    // for (auto x : prime)
    //     cout << x << ' ';
    // cout << '\n';
}
int32_t main()
{
    MTK;
    sieve();
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        int ans = 1e9;
        for (auto p : prime)
        {
            if (p > m)
                break;
            if (m % p == 0)
            {
                int e = 0;
                // cout << p << '\n';
                while (m % p == 0)
                {
                    e++;
                    m /= p;
                }
                int exponent_of_n = 0;
                for (int i = 1; i <= n; i++)
                {
                    int x = i;
                    while (x % p == 0)
                    {
                        exponent_of_n++;
                        x /= p;
                    }
                }
                // cout << exponent_of_n << ' ' << e << '\n';
                ans = min(ans, exponent_of_n / e);
            }
        }
        cout << ans << '\n';
        cout << "Case " << ++cs << ":\n";
        if (ans == 0)
            cout << "Impossible to divide" << '\n';
        else
            cout << ans << '\n';
    }
    return 0;
}