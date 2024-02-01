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
bool cmp(pair<int, string> a, pair<int, string> b)
{

    return a.first > b.first;
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        vector<pair<int, string>> v;
        int n;
        cin >> n;
        cin.ignore();
        for (int i = 0; i < n; i++)
        {
            string s;
            getline(cin, s);
            int len = s.size();
            // cout << s << '\n';
            string age_second = s.substr(len - 4); // ai vabe deoya holo oi index theke last projnto ja ace sob niye nibe
            int age = stoi(age_second);
            string name = s.substr(0, len - 5); // ar aita mane holo 0 index theke oi index projnto sob index niye nibe
            v.push_back({age, name});
        }

        sort(v.rbegin(), v.rend());
        for (auto [x, y] : v)
        {
            cout << y << '\n';
        }
    }
}