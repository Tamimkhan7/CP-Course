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
int N = 15;
int32_t main()
{
    MTK;
    vector<pair<int, string>> v;
    char c = 'A';
    string s;
    s += c;
    int x = 2, ac = 65;
    while (x <= N)
    {
        s += c;
        c++;
         s += c;
        v.push_back(make_pair(x, s));
        s += s;
    }
}