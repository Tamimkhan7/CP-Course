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

const int N = 2e5 + 9;
// int spf[N];
// void spf_ok()
// {
//     for (int i = 1; i < N; i++)
//         spf[i] = i;
//     for (int i = 2; i < N; i++)
//     {
//         if (spf[i] == i)
//         {
//             for (int j = i; j < N; j += i)
//                 spf[j] = min(spf[j], i);
//         }
//     }
// }

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
    // spf_ok();
    int n;
    cin >> n;
    if (is_prime(n))
    {
        cout << 1 << '\n';
        return 0;
    }
    ll e = 0, nn = n, ee = 0;
    for (int i = 2; i < N; i++)
    {
        int x = i;
        if (n % x == 0)
        {
            while (n % x == 0)
            {
                e++;
                n /= x;
            }
        }
    }
    cout << e << '\n';

    return 0;
}