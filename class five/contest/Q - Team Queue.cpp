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
void res(deque<int> a, deque<int> b, int x, int y)
{
    string s;
    cin >> s;
    if (s == "STOP")
        return;
    else
    {
        if (s == "ENQUEUE")
        {
            int xp;
            cin >> xp;
        }
        else
        {
            if (!a.empty())
            {
                cout << a.front() << '\n';
                a.pop_front();
            }
            else
            {
                cout << b.front() << '\n';
                b.pop_front();
            }
        }
    }
}
void solve()
{

    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        deque<int> a;
        for (int i = 0; i < x; i++)
        {
            int p;
            cin >> p;
            a.push_back(p);
        }
        int y;
        cin >> y;
        deque<int> b;
        for (int i = 0; i < y; i++)
        {
            int p;
            cin >> p;
            b.push_back(p);
        }
        res(a, b, x, y);
    }
}
int32_t main()
{
    MTK;
    int t;
    int rt = 1;
    while (cin >> t)
    {
        if (t == 0)
            break;
        else
        {
            cout << "Scenario #" << rt << '\n';
            solve();
        }
        rt++;
    }
}