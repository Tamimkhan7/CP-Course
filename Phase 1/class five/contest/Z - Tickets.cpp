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
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        int ty;
        int x;
        cin >> ty;
        int flag = 0, ans = 0;

        if (ty == 1)
        {
            cin >> x;
            q.push(x);
        }
        else
        {
            cin >> x;
            flag = 1;
            if (x == q.front())
            {
                cout << "Yes" << '\n';
                q.pop();
            }
            else
            {
                ans = 2;
                cout << "No" << '\n';
            }
        }
        if (flag == 1 and ans == 2)
            q.pop();
    }
}