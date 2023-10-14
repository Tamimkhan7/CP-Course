#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define len(a) sizeof(a)
#define lc (n * 2)
#define rc ((n * 2) + 1)
int main()
{
    faster;
    string s;
    cin >> s;
    int x, ans = 0;
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '0')
        {
            x = i;
            ans++;
            if (ans >= 1)
                break;
        }
    }
    if (ans >= 1)
    {
        s.erase(s.begin() + x);
        cout << s << endl;
        return 0;
    }
    else
    {
        s.erase(s.begin());
        cout << s << endl;
        return 0;
    }
}