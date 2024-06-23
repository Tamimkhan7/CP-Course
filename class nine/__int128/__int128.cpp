#include <bits/stdc++.h>
using namespace std;
#define ll int long long
#define mod 1000000000000000007
// both solutions are correct, when i needed i can use any of them //  __int128 read()
//  {
//      string s;
//      cin >> s;
//      __int128 ans = 0;
//      for (int i = 0; i < s.size(); i++)
//      {
//          ans = ans * 10 + (s[i] - '0');
//      }
//      return ans;
//  }

// string to_string(__int128 x)
// {
//     string s;
//     while (x > 0)
//     {
//         s += (char)(x % 10 + '0');
//         x /= 10;
//     }
//     reverse(s.begin(), s.end());
//     return s;
// }

// void write(__int128 x)
// {
//     cout << to_string(x) << '\n';
// }

// int32_t main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     __int128 x = read(), y = read();
//     __int128 ans = x * y;
//     ans += 2;
//     write(ans);
//     return 0;
// }

ll mulmod(ll x, ll y)
{ // O(1)
    return (ll)((__int128)x * y % mod);
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll x, y;
    cin >> x >> y;
    cout << mulmod(x, y) << '\n';
    return 0;
}