#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    MTK;
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    set<int> se;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i <= n; i++)
        se.insert(i);
    map<int, int> mp;
    for (int i = 0; i < m; i++)
    {
        mp[a[i]]++;
        se.erase(a[i]);
    }
    // for(auto [x,y]:mp)cout<<x<<' '<<y<<'\n';
    // for(auto x: se)
    //     cout << x << ' ';
    int r = 1, ans = INT_MAX;
    for (int i = 0; i <= n - m; i++)
    {
        ans = min(ans, *(se.begin()));
        // cout << ans << '\n';
        if (i + m < n)
        {
            mp[a[i]]--;
            if (mp[a[i]] == 0)
            {
                mp.erase(a[i]);
                se.insert(a[i]);
            }
            mp[a[i + m]]++;
            se.erase(a[i + m]);
        }
    }
    cout << ans << '\n';
    return 0;
}
