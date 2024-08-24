#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long
const int N = 2e5 + 9;
int n, a[N];
int32_t main()
{
    MTK;
    cin >> n;
    multiset<ll> v;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    ll ans = 0;
    int r = 1;
    for (int l = 1; l <= n; l++)
    {
        while (r <= n)
        {
            if (v.find(a[r]) == v.end())
                v.insert(a[r++]);
            else
                break;
        }
        ans = max(1LL * (r - l), ans);
        v.erase(v.find(a[l]));
        // for (auto x : v)
        //     cout << x << ' ';
        // cout << '\n';
    }
    cout << ans << '\n';
    return 0;
}
