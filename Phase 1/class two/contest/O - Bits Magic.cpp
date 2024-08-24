#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        unsigned int n, k; // unsigned data type range of the value <2^32, and integer data tpye range is <2^31,
        // tai amader value ta maximum 31 ta bit count korte pare tai ami unsigned nile kaj ta kre pelte parbo
        cin >> n >> k;
        cout << (n | (1 << k)) << endl; // if kth bit is off then we convert the kth bit, if kth bit is on then we will continue
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