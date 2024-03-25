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
const int N = 1e5 + 9;
int n, q, a[N], x;
bool serach(int l, int r)
{
    if (l > r)
        return false;
    int mid = (l + r) / 2;
    if (a[mid] == x)
        return true;
    else if (a[mid] > x)
        return serach(l, mid - 1);
    else
        return serach(mid + 1, r);
}

int32_t main()
{
    MTK;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    while (q--)
    {
        cin >> x;
        bool found = serach(1, n);
        if (found)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}