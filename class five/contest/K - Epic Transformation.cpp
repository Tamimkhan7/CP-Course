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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++; // count frequency of vector value
        }
        priority_queue<pair<int, int>> pq;
        for (auto [x, y] : mp)
        {
            pq.push(make_pair(y, x));
        }
        int ans = n;
        while (pq.size() > 1)
        {
            int a1 = pq.top().first;
            int b1 = pq.top().second;
            pq.pop();
            int a2 = pq.top().first;
            int b2 = pq.top().second;
            pq.pop();
            a1--;
            a2--;
            ans -= 2;
            if (a1 > 0)
                pq.push(make_pair(a1, b1));
            if (a2 > 0)
                pq.push(make_pair(a2, b2));
        }
        cout << ans << '\n';
    }
}