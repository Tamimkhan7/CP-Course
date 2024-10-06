#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> a({100, 9, 10, 9});
    set<int> se;
    for (auto x : a)
        se.insert(x);
    // for (auto x : se)
    //     cout << x << ' ';
    // cout << '\n';
    map<int, int> mp;
    int id = 0;
    for (auto x : se)
    {
        mp[x] = ++id;
        // cout << mp[x] << ' ' << id << '\n';
    }
    for (int i = 0; i < a.size(); i++)
    {
        int x = mp[a[i]];
        cout << x << ' ';
    }
    return 0;
}