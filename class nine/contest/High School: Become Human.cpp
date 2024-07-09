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
// int power1(int a, int b, int mod)
// {
//     int ans = 1 % mod;
//     while (b > 0)
//     {
//         if (b & 1)
//             ans = 1LL * ans * a % mod;

//         a = 1LL * a * a % mod;
//         b >>= 1;
//     }
//     return ans;
// }

int32_t main()
{
    MTK;

    // int mod = 1e9 + 7;
    int x, y;
    cin >> x >> y;
    // if (((a == 0 || a == 1) || (b == 0 || b == 1)) and (a != b))
    // {
    //     if (a > b)
    //     {
    //         cout << ">" << '\n';
    //         return 0;
    //     }
    //     else
    //     {
    //         cout << "<" << '\n';
    //         return 0;
    //     }
    // }
    // else if (a < 11 and b < 11)
    // {
    //     x = power1(a, b, mod);
    //     y = power1(b, a, mod);
    // }
    // else
    // {
    //     x = a;
    //     y = b;
    //     swap(x, y);
    // }
    double l = y * log(x);
    double r = x * log(y);
    // log pow ai function gula double value return kore
    if (l < r)
        cout << "<" << '\n';
    else if (l > r)
        cout << ">" << '\n';
    else
        cout << "=" << '\n';

    return 0;
}
