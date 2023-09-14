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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll sum = 0;
        // we are using 1 to n all valuer sum in the below line formula to n*(n+1)/2

        ll ans = (ll)n * (n + 1) / 2;
        // then we use all 2 power value sum// then we identify tha equation all sum - 2*all pow of 2 square value
        for (int i = 1; i <= n; i *= 2)
        {
            sum += i;
        }
        // then we will find out the value of ans of formula
        ll ans2 = ans - 2 * sum;
        cout << ans2 << endl;
    }
    return 0;
}
