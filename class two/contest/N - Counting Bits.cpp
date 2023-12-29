#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int bitcount(int k)
{
    int ans = 0;
    for (int i = 0; i <= 31; i++)
    {
        if (1 & (k >> i))
        {
            ans++;
        }
    }
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        // count += bitcount(i); // koyta on bit ace ta ber korar jonno ai function ta use kora
        count += __builtin_popcount(i); // aita akta building function, aita dio oh check kora hoy, koyta bit on ace ar koyta bit off ace
    }
    cout << count << endl;
}
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
