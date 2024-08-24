#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
int main()
{
    faster;
    int n;
    cin >> n;
    multiset<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.insert(x);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        auto it = v.find(x);
        if (it != v.end())
        {
            v.erase(it);
        }
    }
    cout << v.size() << '\n';
}