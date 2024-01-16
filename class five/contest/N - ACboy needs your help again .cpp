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
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    deque<int> d;
    while (n--)
    {
        string x;
        cin >> x;
        if (x == "IN")
        {
            int xp;
            cin >> xp;
            d.push_front(xp);
        }
        else
        {
            if (s == "FIFO")
            {
                if (d.empty())
                    cout << "None" << '\n';
                else
                {
                    cout << d.back() << '\n';
                    d.pop_back();
                }
            }
            else
            {
                if (d.empty())
                    cout << "None" << '\n';
                else
                {
                    cout << d.front() << '\n';
                    d.pop_front();
                }
            }
        }
    }
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}
// problem ta stack and queue diye solve kora jay
/*void solve()
{
    int n;
    string s;
    cin >> n >> s;
    queue<int> q;
    stack<int> st;
    while (n--)
    {
        if (s == "FIFO")
        {
            string x;
            cin >> x;
            if (x == "IN")
            {
                int ac;
                cin >> ac;
                q.push(ac);
            }
            else
            {
                if (q.empty())
                {
                    cout << "None" << '\n';
                }
                else
                {
                    cout << q.front() << '\n';
                    q.pop();
                }
            }
        }
        else
        {
            string x;
            cin >> x;
            if (x == "IN")
            {
                int ac;
                cin >> ac;
                st.push(ac);
            }
            else
            {
                if (st.empty())
                {
                    cout << "None" << '\n';
                }
                else
                {
                    cout << st.top() << '\n';
                    st.pop();
                }
            }
        }
    }
}*/