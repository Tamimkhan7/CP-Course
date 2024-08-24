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

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll ans;
    int x = a[0];
    ans = 1;
    for (int i = 1; i < n; i++)
        ans ^= a[i];
    if (ans == x)
    {
        cout << "YES" << '\n';
        return;
    }
    ans = 1, x = a[n - 1];
    for (int i = 0; i < n - 1; i++)
        ans ^= a[i];
    if (ans == x)
    {
        cout << "YES" << '\n';
        return;
    }
    for (int i = 0; i < n; i++)
    {
        int left = 1, right = 1, x = a[i];
        for (int j = i + 1; j < n; j++)
            right ^= a[i];
        for (int j = 0; j < i; j++)
            left ^= a[i];
        if (left ^ x == right || right ^ x == left)
        {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
