#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
const int N = 2e5 + 9;
int a[N];
int32_t main()
{
    MTK;
    int n, x;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    map<int, int> mp;
    // fix bug,
    // fix kore value ber kora jay
    for (int i = 1; i <= n; i++)
    {
        if (mp.find(x - a[i]) != mp.end())
        {
            cout << mp[x - a[i]] << ' ' << i << '\n';
            return 0;
        }
        mp[a[i]] = i;
    }
    cout << "IMPOSSIBLE" << '\n';
    return 0;
}