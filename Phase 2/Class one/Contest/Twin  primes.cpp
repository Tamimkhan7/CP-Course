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
#define N 20000000

vector<pair<int, int>> twin_primes;
vector<bool> is_prime(N + 1, true);

void sieve()
{
    is_prime[1] = false;

    for (int i = 2; i * i <= N; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= N; j += i)
                is_prime[j] = false;
        }
    }

    for (int i = 2; i <= N - 2; i++)
    {
        if (is_prime[i] && is_prime[i + 2])
            twin_primes.push_back({i, i + 2});
    }
}

int main()
{
    MTK;
    sieve();
    int n;
    while (cin >> n)
        cout << "(" << twin_primes[n - 1].first << ", " << twin_primes[n - 1].second << ")\n";

    return 0;
}
