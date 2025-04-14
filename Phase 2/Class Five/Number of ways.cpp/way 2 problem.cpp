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

const int N = 1e3 + 9;
int ways[N];

int count(int n)
{
    if (n == 0)
        return 1;
    if (ways[n] != -1)
        return ways[n];
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += count(n - i);
        // cout << n - i << '\n';
        // show(ans);
        ans %= mod;
    }
    return ways[n] = ans;
}
int32_t main()
{ 
    MTK;
    int n;
    cin >> n;
    mem(ways, -1);
    cout << count(n) << '\n';
    return 0;
}