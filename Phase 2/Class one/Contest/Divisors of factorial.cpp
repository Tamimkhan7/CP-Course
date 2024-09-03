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
const int mod = 1e9 + 7;

const int N = 5e4 + 9;
vector<int> prime;
bitset<N> is_prime;
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
}
int32_t main()
{
    MTK;
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int number_of_div = 1;
        for (auto p : prime)
        {
            if (p > n)
                break;
            int e = 0;
            for (int i = p; i <= n; i += p)
            {
                int x = i;
                while (x % p == 0)
                {
                    e++;
                    x /= p;
                }
            }
            number_of_div = 1LL * number_of_div * (e + 1) % mod;
        }

        cout << number_of_div << '\n';
    }
    return 0;
}