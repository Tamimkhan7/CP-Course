#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
const int N = 1e5 + 9;
int a[N], pref[N];
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
        pref[i] = pref[i - 1] ^ a[i];

    map<int, int> mp;
    mp[pref[0]]++;
    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        ans += mp[pref[i]];
        mp[pref[i]]++;
    }
    cout << ans << '\n';
    return 0;
}