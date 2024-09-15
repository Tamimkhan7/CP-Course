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
int spf[N];
void sieve()
{
    for (int i = 1; i < N; i++)
        spf[i] = i;
    for (int i = 2; i < N; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i; j < N; j += i)
                spf[j] = min(spf[j], i);
        }
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
        int ans = INT_MIN;
        for (int i = 2; i * i < N; i++)
        {
            int p = i;
            int e = 0;
            if (n % p == 0)
            {
                while (n % p == 0)
                {
                    e++;
                    n /= p;
                }
            }
            ans = max(ans, e);
        }
        cout << ans << '\n';
    }
    return 0;
}