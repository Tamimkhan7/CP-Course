#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long

int32_t main()
{
    MTK;
    int n, k;
    cin >> n >> k;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int r = 1;
    vector<int> mx, mn;
    multiset<int> se;
    for (int l = 1; l <= n - k + 1; l++)
    {
        while (r <= n)
        {
            se.insert(a[r++]);
            if (se.size() == k)
            {
                mx.push_back(*se.rbegin());
                mn.push_back(*se.begin());
                break;
            }
        }
        // for (auto x : se)
        //     cout << x << ' ';
        // cout << '\n';
        se.erase(se.find(a[l]));
    }
    // for (int i = 0; i < mn.size(); i++)
    //     cout << mn[i] << " \n"[i == (int)mn.size() - 1];

    // for (int i = 0; i < mx.size(); i++)
    //     cout << mx[i] << " \n"[i == (int)mx.size() - 1];
    for (auto x : mn)
        cout << x << ' ';
    cout << '\n';
    for (auto x : mx)
        cout << x << ' ';
    cout << '\n';
    return 0;
}