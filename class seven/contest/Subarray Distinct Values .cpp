#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
int a[N], n, k;
int main()
{
    MTK;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    set<ll> se;
    ll l = 0;
    ll ans = 0;

    for (ll r = 0; r < n; r++)
    {
        se.insert(a[r]);
        while (l <= r && se.size() > k)
        {
            se.erase(a[l]);
            l++;
        }
        ans += r - l + 1;
    }
    cout << ans << '\n';
    return 0;
}