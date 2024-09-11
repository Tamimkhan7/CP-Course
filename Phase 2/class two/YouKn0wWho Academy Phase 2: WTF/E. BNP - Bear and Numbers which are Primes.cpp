#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
const int N = 1e6, MAX_PRIME_SQRT = 1e3 + 1;
vector<int> spf(N + 1);
vector<int> primes;
vector<int> prime_count(N + 1, 0);

void sieve()
{
    iota(spf.begin(), spf.end(), 0);
    for (int i = 2; i * i <= N; ++i)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= N; j += i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
    for (int i = 2; i <= N; ++i)
    {
        if (spf[i] == i)
            primes.push_back(i);
    }
}

void factorize_and_count(const vector<int> &val)
{
    unordered_map<int, int> cnt;
    for (int x : val)
    {
        while (x > 1)
        {
            int p = spf[x];
            cnt[p]++;
            while (x % p == 0)
                x /= p;
        }
    }
    for (auto &[prime, count] : cnt)
    {
        if (prime <= N)
            prime_count[prime] += count;
    }
}

int main()
{
    MTK;
    sieve();

    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; ++i)
        cin >> x[i];

    factorize_and_count(x);

    int q;
    cin >> q;
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        ll result = 0;
        for (int prime : primes)
        {
            if (prime > r)
                break;
            if (prime >= l)
                result += prime_count[prime];
        }
        cout << result << '\n';
    }

    return 0;
}
