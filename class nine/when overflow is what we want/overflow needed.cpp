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


//unsigned range is (2^64-1)

llu power(llu x, llu y)
{
    llu ans = 1;
    while (y > 0)
    {
        if (y & 1)
        {
            // check last bit, if find last bit is set bit that the work to the condition
            ans *= x;
        }
        x *= x;
        y >>= 1; // y/=2 that are same
    }
    return ans;
}
int32_t main()
{
    MTK;
    llu x = 1e9 + 7, y = 1e18;
    cout << power << (x, y) << '\n';
    return 0;
}