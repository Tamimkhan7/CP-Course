#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long
const int N = 2e5 + 5;
int a[N], n, k;
int32_t main()
{
    MTK;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    multiset<int> se;
    int r = 1;
    ll ans = 0;
    for (int l = 1; l <= n; l++)
    {
        while (r <= n)
        {
            if (se.size() < k)
                se.insert(a[r++]);
            else
                break;
        }
        ans += r - l;
        // for (auto x : se)
        //     cout << x << ' ';
        // cout << '\n';
        se.erase(se.find(a[l]));
    }
    cout << ans << '\n';
    return 0;
}