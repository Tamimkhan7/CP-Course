#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
void print(priority_queue<pair<int, int>> ml)
{
    while (!ml.empty())
        cout << (ml.top()).first << ' ' << (ml.top()).second << '\n';
    ml.pop();
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        priority_queue<pair<int, int>> ml;
        while (n--)
        {
            int x, y;
            cin >> x >> y;
            ml.push(make_pair(x, y));
        }
        print(ml);
    }
}