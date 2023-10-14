#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;

void solve()
{
    llu n, k;
    cin >> n >> k;

    cout << (n | (1u << k)) << endl;
}

int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

// amar ans cilo
//  llu set_k_bit(llu n, llu k)
//  {
//      return (n | (1u << k));
//  }
//  void solve()
//  {
//      llu n, k;
//      cin >> n >> k;
//      if (1 & (n >> k))
//      {
//          cout << n << endl;
//      }
//      else
//      {
//          cout << set_k_bit(n, k) << endl;
//      }
//  }

// int main()
// {
//     faster;
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }