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

int main()
{
    MTK;
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    set<char> se;
    for (auto x : s)
        se.insert(x);

    char smallest_char = *(se.begin()); // set always return iterator
    // cout << smallest_char << '\n';
    if (k <= n)
    {
        for (int i = k - 1; i >= 0; i--)
        {
            auto it = se.upper_bound(s[i]);
            if (it != se.end())
            {
                string ans;
                ans.resize(k);
                char next_char = *it;
                ans[i] = next_char;
                for (int j = 0; j < i; j++)
                    ans[j] = s[j];
                for (int j = i + 1; j < k; j++)
                    ans[j] = smallest_char;
                cout << ans << '\n';
                return 0;
            }
        }
    }
    else
    {
        string ans;
        ans.resize(k);
        for (int i = 0; i < n; i++)
            ans[i] = s[i];
        for (int j = n; j < k; j++)
            ans[j] = smallest_char;
        cout << ans << '\n';
        return 0;
    }
    return 0;
}
