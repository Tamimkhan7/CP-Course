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
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // find all subset using bitmask formula
    int ans = 0;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        int total_problem = 0, total_diffcult = 0;
        int max_diffcult = 0, min_diffcult = 1e6 + 9;
        for (int i = 0; i < n; i++)
        {
            if ((mask >> i) & 1)
            {
                total_problem++;
                total_diffcult += a[i];
                max_diffcult = max(max_diffcult, a[i]);
                min_diffcult = min(min_diffcult, a[i]);
            }
        }
        if (total_problem >= 2 and total_diffcult >= l and total_diffcult <= r and abs(max_diffcult - min_diffcult) >= x)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}