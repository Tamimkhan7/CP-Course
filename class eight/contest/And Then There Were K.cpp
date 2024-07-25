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
void solve()
{

    // ll ans = n;
    // int x = n - (__lg(n));
    // for (int i = n - 1; i >= x; i--)
    // {
    //     ans &= i;
    //     if (ans == 0)
    //     {
    //         cout << i << '\n';
    //         return;
    //     }
    // }
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        // count most signification bit,, n&(n-1)&(n-1)
        // amra jani two ta digit ar and korle hoyto soman thakne noyto kome, komte thakle last set bit gula change hote thake
        // most significate bit ta ber korle baki gula 0 hoye jabe ar oi most significate bit tai amar answer
        for (int i = 30; i >= 0; i--)
        {
            if ((n >> i) & 1)
            {
                ans = i;
                break;
            }
        }
        // ans = 31 - __builtin_clz(n);    // leading zero gula count kore jay ai funciton ar dara
        ans = __lg(n);                  // last set bit ber korar jonno __lg function use kora jay, aita 2 ar log
        cout << (1 << ans) - 1 << '\n'; // karon amara 0th bit theke start koreci, tai 1 minues kore dicci
    }
    return 0;
}