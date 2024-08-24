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
#define llu __int128
const int mod = 5;

string to_string(__int128 x)
{
    string s;
    while (x)
    {
        s += (char)(x % 10 + '0');
        x /= 10;
    }
    reverse(all(s));
    return s;
}
void write(__int128 x)
{
    cout << to_string(x) << '\n';
}

llu power(int a, llu b)
{
    llu ans = 1 % mod;
    while (b > 0)
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
    string s;
    cin >> s;
    llu n = 0;
    for (auto x : s)
        n = (n * 10 + (x - '0'));

    // int res = 0;
    // // for (int i = 1; i <= 4; i++)
    // // {
    // //     res += (__int128)power(i, n) % mod;
    // //     res %= mod;
    // // }
    if (n % 4 == 0)
        cout << 4 << '\n';
    else
        cout << 0 << '\n';

    return 0;
}