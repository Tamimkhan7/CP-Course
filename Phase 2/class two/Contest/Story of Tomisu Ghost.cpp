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

#define mod 10000019
const int N = 1e5 + 9;
vector<int> prime;
bool is_prime[N];

// sieve find all prime value in 1 to N
void sieve()
{
    for (int i = 2; i < N; i++)
        is_prime[i] = true;
    for (int i = 2; i < N; i++)
    {
        if (is_prime[i])
        {
            for (int j = i + i; j < N; j += i)
                is_prime[j] = false;
        }
    }
    for (int i = 2; i < N; i++)
    {
        if (is_prime[i])
            prime.push_back(i);
    }
}

// given a interger n and a prime number is p, find the largest x such that p^x divides n! in O(logn) time complexity
int legendre(int n, int p)
{
    int ans = 0;
    while (n)
    {
        ans += n / p;
        n /= p;
    }
    return ans;
}

// find(a ^ b) % mod

int power(int a, int b)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
            ans = 1LL * ans * a % mod;
        a = 1LL * a * a % mod;
        b >>= 1;
    }
    return ans;
}

int32_t main()
{
    MTK;
    sieve();
    // for (auto x : prime)
    //     cout << x << ' ';
    // cout << '\n';
    int tt, cs = 0;
    cin >> tt;
    while (tt--)
    {
        cout << "Case " << ++cs << ": ";
        int n, t;
        cin >> n >> t;
        int b = 1; // b for base,,find maximum base for n factorial and match the t trailling zero
        bool ok = false;
        for (auto p : prime)
        {
            if (p > n)
                break;
            int f = legendre(n, p); // p1^fi find from n!
            int e = f / t;
            if (e > 0)
                ok = true;
            b = 1LL * b * power(p, e) % mod;
        }
        if (!ok)
            b = -1;
        cout << b << '\n';
    }
    return 0;
}