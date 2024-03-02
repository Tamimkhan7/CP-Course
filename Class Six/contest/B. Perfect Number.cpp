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
int N = 1e8;
int check(int x)
{
    int ans = 0;
    while (x > 0)
    {
        ans += x % 10;
        x /= 10;
    }
    // cout<<ans<<'\n';
    return ans;
}
int32_t main()
{
    MTK;
    int k;
    cin >> k;
    vector<int> v;
    int n = 19;
    for (int i = 19; i < N; i += 9)
    {
        if (check(i)==10)
        {
            v.push_back(i);
            if (v.size() == k)
            {
                cout << v[k - 1] << '\n';
                return 0;
            }
        }
    }
}