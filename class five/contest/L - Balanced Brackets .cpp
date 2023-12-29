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
#define pb push_back
#define pop pop_back()
void print(string s)
{
    for (int i = 0; i < s.size(); i++)
        cout << s[i] << ' ';
    cout << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '[' and s[i + 1] == ']')
            {
                s.erase(s.begin() + i);
                s.erase(s.begin() + i);
                // print(s);
                i = -1;
            }
            if (s[i] == '{' and s[i + 1] == '}')
            {
                s.erase(s.begin() + i);
                s.erase(s.begin() + i);
                // print(s);
                i = -1;
            }
            if (s[i] == '(' and s[i + 1] == ')')
            {
                s.erase(s.begin() + i);
                s.erase(s.begin() + i);
                // print(s);
                i = -1;
            }
        }
        if (s.size() == 0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
        // cout << s.size() << '\n';
    }
}