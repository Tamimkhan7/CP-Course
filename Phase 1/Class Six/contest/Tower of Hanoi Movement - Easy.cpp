// divede and conquer problem

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

int n, step, moves;

void solve(int disk, char start, char end, char mid)
{
    if (disk == 0)
        return;
    solve(disk - 1, start, mid, end);
    moves++;
    // move the last disk from the start tower to the end tower
    if (moves == step)
        cout << disk << " : " << start << " => " << end << '\n';

    solve(disk - 1, mid, end, start);
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> step;
        moves = 0;
        solve(n, 'A', 'C', 'B');
    }
}
