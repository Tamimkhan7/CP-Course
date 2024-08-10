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
const int N = 1e6 + 9;
ll a[N];
void solve()
{
    a[1] = 1, a[2] = 5, a[3] = 13;
    for (int i = 4; i < N; i++)
    {
        if (i % 2)
            a[i] = 3 * a[i - 1] + a[i - 3] - 3 * a[i - 2] + 1;
        else 
            a[i] = 3 * a[i - 1] + a[i - 3] - 3 * a[i - 2] + 2;
    }
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    solve();
    while (t--)
    {
        int n;
        cin >> n;
        cout << a[n] << '\n';
    }
    return 0;
}