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
const int N = 1e5 + 5;
int pw[N];
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    pw[0] = 1;
    for (int i = 1; i < N; i++)
        pw[i] = (pw[i - 1] * 2) % mod;
    if (n == 1)
    {
        cout << 0 << '\n';
        return 0;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int contrib = (1LL * a[i] * (2 * i - n + 1)) % mod + mod;
        ans = (0LL + ans + contrib) % mod;
    }

    cout << (1LL * ans * pw[n - 2]) % mod << '\n';
    return 0;
}