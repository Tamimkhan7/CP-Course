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
int get_apple(deque<pair<int, int>> left, deque<pair<int, int>> right)
{
    int total_apples = 0;
    while (1)
    {
        if (left.empty())
            break;
        total_apples += left.front().second;
        left.pop_front();
        if (right.empty())
            break;
        total_apples += right.front().second;
        right.pop_front();
    }
    return total_apples;
}
int32_t
main()
{
    MTK;
    int n;
    cin >> n;
    deque<pair<int, int>> left, right;
    while (n--)
    {
        int pos, value;
        cin >> pos >> value;
        if (pos < 0)
            left.push_back({-pos, value});
        else
            right.push_back({pos, value});
    }
    sort(all(left));
    sort(all(right));
    int total_apples = max(get_apple(left, right), get_apple(right, left));
    cout << total_apples << '\n';
}