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
#define pb push_back
#define pop pop_back()
#define len(a) sizeof(a)
#define lc (n * 2)
#define rc ((n * 2) + 1)
int main()
{
    faster;
    int a, b;
    cin >> a >> b;
    // if (a > b)
    //     cout << a + a - 1 << endl;
    // else if (a < b)
    //     cout << b + b - 1 << endl;
    // else
    //     cout << a + b << endl;

    int ans = a + (a - 1);
    ans = max(ans, b + (b - 1));
    ans = max(ans, a + b);
    cout << ans << endl;
    return 0;
}
// tinta option pete pari like = jodi a button press kori tahole tar theke 1 kome jame tahole hobe a+(a-1)
// jodi b button press kori tahole b theke a kome jay akhette hobe (b+b-1)
// jodi two button press kori tahole two tai ak sathe plus hoye jabe
