#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
const int N = 1e6;
int a[N], x;
// using recursion formula
bool search(int l, int r)
{
    if (l > r)
        return false;
    int mid = (l + r) / 2;
    if (a[mid] == x)
        return true;
    else if (x > a[mid])
        search(mid + 1, r);
    else
        search(l, mid - 1);
}
int32_t main()
{
    MTK;
    int n;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a, a + n);
    bool ans = search(1, n);
    // cout << boolalpha << ans << '\n';//if i want to print true or false
    cout << ans << '\n';
}