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
bool f[N];
vector<int> prime;
void sieve()
{
    f[1] = true;
    for (int i = 2; i * i < N; i++)
    {
        if (!f[i])
        {
            prime.push_back(i);
            for (int j = i * i; j < N; j += i)
                f[j] = true;
        }
    }
    for (int i = 2; i < N; i++)
    {
        if (!f[i])
            prime.push_back(i);
    }
}
int32_t main()
{
    MTK;
    sieve();
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int ans = 1;
        for (auto p : prime)
        {
            if (1LL * p * p > n)
                break; // mane n already prime hoye ace tai ar kono value dara divisible hocce na
            int e = 0;
            if (n % p == 0)
            {
                while (n % p == 0)
                {
                    e++;
                    n /= p;
                }
            }
            ans *= (e + 1);
        }
        if (n > 1)
            ans *= 2;
        cout << "Case " << ++cs << ": " << ans - 1 << '\n';
    }
    return 0;
}