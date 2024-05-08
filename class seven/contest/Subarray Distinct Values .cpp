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
    set<int> se;
    int r = 1;
    ll ans = 0;
    for (int l = 1; l <= n; l++)
    {
        se.insert(a[r]);
        while (r <= l and se.size() > k)
        {
            se.erase(a[r]);
            r++;
        }

        ans += r - l + 1;

        // se.erase(se.find(a[l]));
    }
    cout << ans << '\n';
    return 0;
}