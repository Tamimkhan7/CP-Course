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

bool is_prime(int n)
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

    int n;
    cin >> n;
    int ans = 0;
    if (is_prime(n))
    {
        cout << 1 << '\n';
        return 0;
    }
    if (n % 2 == 0 || (is_prime(n - 2)))
    {
        cout << 2 << '\n';
        return 0;
    }

    cout << 3 << '\n';

    return 0;
}