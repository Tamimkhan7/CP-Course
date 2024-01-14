#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
void print(set<int> s)
{
    for (auto x : s)
        cout << x << ' ';
    cout << '\n';
}
int32_t main()
{
    faster;
    int q;
    cin >> q;
    set<int> s;
    while (q--)
    {
        int y, x;
        cin >> y >> x;
        if (y == 1)
        {
            s.insert(x);
            //  print(s);
        }
        else if (y == 2)
        {
            if (s.find(x) != s.end())
            {
                s.erase(x);
            }
            // for multiset
            //  if (s.find(x) != s.end())
            //  {
            // auto it = s.find(x);
            //     s.erase(it);
            //     // print(s);

            // }
        }
        else
        {
            if (s.find(x) != s.end())
                cout << "Yes" << '\n';
            else
                cout << "No" << '\n';
        }
        // cout << s.size() << '\n';
    }
}