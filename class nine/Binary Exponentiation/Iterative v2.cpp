#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define llu unsigned long long
#define mod 1000000007

llu power(llu x, llu n)
{
    llu ans = 1;
    while (n > 0)
    {
        if (n & 1)
        { // when n is odd or n last bit is 1
            ans *= x;
        }
        x *= x;
        n >>= 1; // n/=2 same kotha
    }
    return ans;
}
int32_t main()
{
    MTK;
    llu x = 1e9 + 7, n = 1e18;
    cout << power(x, n) << '\n';
    return 0;
}