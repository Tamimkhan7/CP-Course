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
    set<int> s;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
        cout << s.size() << '\n';
    }
}