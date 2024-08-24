#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
// const int N = 1e5 + 9;
// int a[N];

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n + 1];
        memset(a, 0, sizeof(a));
        map<int, int> mp;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int value = r - l + 1;
            a[l] += 1;
            a[r + 1] -= 1;
            mp[r + 1] += -value;
        }
        // use prefix sum
        for (int i = 1; i <= n; i++)
            a[i] += a[i - 1];

        for (int i = 1; i <= n; i++)
        {
            a[i] += a[i - 1];
            // cout << a[i] << ' ';
            a[i] += mp[i];
        }
        for (int i = 1; i <= n; i++)
            cout << a[i] << ' ';
        cout << '\n';
    }
    return 0;
}