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

const int N = 3030;
string a, b;
int dp[N][N];

int32_t main()
{
    MTK;
    cin >> a >> b;
    int n = a.size(), m = b.size();

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]); // jodi match na kore
            if (a[i] == b[j])
                dp[i][j] = max(dp[i][j], dp[i + 1][j + 1] + 1); // match korle 1 add
        }
    }

    cout << dp[0][0] << '\n';
    return 0;
}
