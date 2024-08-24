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
    string s, a, b;
    cin >> s >> a >> b;
    int n = s.size();
    vector<int> x, y;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == b[j])
        {
            y.push_back(i);
            j++;
            i = -1;
        }
    }
    j = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == a[j])
        {
            x.push_back(i);
            j++;
            i = -1;
        }
    }
    int k = 0;
    while (k < a.size())
    {
        if (x[k] > y[k])
        {
            cout << ">" << '\n';
            return;
        }
        else if (x[k] < y[k])
        {
            cout << "<" << '\n';
            return;
        }
        k++;
    }
    cout << "=" << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}