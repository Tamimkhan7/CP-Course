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

bool ok(int n)
{
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
    // for (auto x : prime)
    //     cout << x << ' ';
    // cout << '\n';
    int n;
    cin >> n;
    if (ok(2) and ok(n - 2))
    {
        cout << 2 << '\n';
        cout << 2 << ' ' << n - 2 << '\n';
    }
    else
    {
        cout << 3 << '\n';
        cout << 3 << ' ';
        n -= 3;
        for (int i = 3; i <= sqrt(n); i++)
        {
            if (ok(i) and ok(n - i))
            {
                cout << i << ' ' << n - i << '\n';
                break;
            }
        }
    }
    return 0;
}