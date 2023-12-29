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
    double a;
    cin >> a;
    // cout << round(a) << endl;
    // don't use build function then check the round value
    int integer_part = int(a);              // find the intger value
    double faction_part = a - integer_part; // faction_part find
    // cout << faction_part << endl;
    if (faction_part > 0.5)
        cout << integer_part + 1 << endl;
    else
        cout << integer_part << endl;
    return 0;
} // 3.456
  // 99.97