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
bool is_valid(char open, char close)
{
    if (open == '(' and close == ')')
        return true;
    else if (open == '{' and close == '}')
        return true;
    else if (open == '[' and close == ']')
        return true;
    else
        return false;
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
        bool ok = true;
        stack<char> st;
        for (auto c : s)
        {
            if (c == '(' or c == '{' or c == '[')
            {
                st.push(c);
            }
            else
            {
                if (st.empty())
                {
                    ok = false;
                    break;
                }
                else
                { 
                    char close = c;
                    char open = st.top();
                    st.pop();
                    if (!is_valid(open, close))
                    {
                        ok = false;
                        break;
                    }
                }
            }
        }
        if (!st.empty())
            ok = false;
        if (ok)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}
// this is one way correct answer
//          for (int i = 0; i < s.size(); i++)
//          {
//              if (s[i] == '[' and s[i + 1] == ']')
//              {
//                  s.erase(s.begin() + i);
//                  s.erase(s.begin() + i);
//                  i = -1;
//              }
//              if (s[i] == '{' and s[i + 1] == '}')
//              {
//                  s.erase(s.begin() + i);
//                  s.erase(s.begin() + i);
//                  i = -1;
//              }
//              if (s[i] == '(' and s[i + 1] == ')')
//              {
//                  s.erase(s.begin() + i);
//                  s.erase(s.begin() + i);
//                  i = -1;
//              }
//          }
//          if (s.size() == 0)
//              cout << "YES" << '\n';
//          else
//              cout << "NO" << '\n';