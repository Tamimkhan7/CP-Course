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
int a[N];
int dp[N];

int LS(int n)
{
    if (n == 0)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    int ans = 1;
    for (int j = 0; j < n; j++)
    {
        if (a[j] < a[n])
            ans = max(ans, LS(j) + 1);
    }
    return dp[n] = ans;
} 
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    mem(dp, -1);
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans = max(ans, LS(i));
    cout << ans << '\n';
    return 0;
}