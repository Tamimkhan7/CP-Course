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
    double a, b, k;
    cin >> a >> b;
    // k = (b / a) * 100;
    // k = 100 - k;
    // cout << k << endl;

    int total_discount = a - b;
    double discount_percentage = (double)total_discount / a * 100;
    // cout << discount_percentage << endl; // that's my answer

    // but we are trying fixed factuion value
    cout << fixed << setprecision(6) << discount_percentage << endl;
    return 0;
}