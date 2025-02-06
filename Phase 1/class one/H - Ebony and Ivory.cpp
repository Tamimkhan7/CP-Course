#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;

int main()
{
    faster;
    int a, b, c;
    cin >> a >> b >> c;
    // int p = 0, q, k, n, m;
    // if (c % a == 0 || c % b == 0)
    // {
    //     cout << "YES" << endl;
    //     return 0;
    // }
    // n = max(a, b);
    // m = min(a, b);
    // q = c - n;
    // // cout << m << endl;
    // if (q % m == 0 && (c > a && c > b))
    // {
    //     cout << "YES" << endl;
    //     return 0;
    // }
    // while (c >= n && c > m)
    // {
    //     c -= m;
    //     // c /= n;
    //     if (c % n == 0)
    //     {
    //         p++;
    //         break;
    //     }
    // }

    // if (p == 0)
    //     cout << "NO" << endl;
    // else
    //     cout << "YES" << endl;

    // trying to another formula solve the problem

    for (int i = 0; i <= c; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            ll x = a * i + b * j;
            if (x > c)
                break;
            if (x == c)
            {
                // cout << i << " " << j << endl;
                cout << "YES" << '\n';
                return 0;
            }
        }
    }
    cout << "NO" << '\n';
    // a = min(a, b);
    // b = max(a, b);
    // int i = 0;
    // while (a <= c || b <= c)
    // {
    //     if (i == 0)
    //         c -= b;
    //     else
    //         c -= a;
    //     if (c == 0)
    //     {
    //         cout << "YES" << endl;
    //         return 0;
    //     }
    //     i++;
    // }
    // cout << "NO" << endl;
    return 0;
}