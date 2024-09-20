#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll long long
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

bool is_prime(int n)
{
    if (n < N)
        return !f[n];
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int32_t main()
{
    MTK;
    sieve();

    int n;
    cin >> n;

    if (is_prime(n))
    {
        cout << 1 << '\n';
        cout << n << '\n';
        return 0;
    }

    if (is_prime(n - 2))
    {
        cout << 2 << '\n';
        cout << 2 << ' ' << n - 2 << '\n';
        return 0;
    }

    cout << 3 << '\n';
    cout << 3 << ' ';
    n -= 3;

    for (int i = 0; i < prime.size(); i++)
    {
        int x = prime[i];
        int y = n - x;
        if (y > 0 && is_prime(y))
        {
            cout << x << ' ' << y << '\n';
            return 0;
        }
    }

    return 0;
}
