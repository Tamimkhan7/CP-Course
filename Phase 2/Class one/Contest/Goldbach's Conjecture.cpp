#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const int N = 1e7 + 9;
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
}
int32_t main()
{
    MTK;
    sieve();
    vector<int> prime;
    for (int i = 1; i <= N; i++)
    {
        if (is_prime[i])
            prime.push_back(i);
    }
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int ans = 0;
        for (auto a : prime)
        {
            if (a > n)
                break;
            int b = n - a;
            if (is_prime[b] and a <= b)
                ans++;
        }
        cout << "Case " << ++cs << ": " << ans << '\n';
    }
    return 0;
}
