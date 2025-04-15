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

int lcs(int i, int j)
{
    if (i >= a.size() or j >= b.size())
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];

    int ans = max(lcs(i + 1, j), lcs(i, j + 1)); // jodi kono ta na mile tokhn ami a string forward a jabo noyto b string a forward a jabo
    if (a[i] == b[j])
        ans = max(ans, lcs(i + 1, j + 1) + 1); // match paile ans ar sathe 1 add kore dibo

    return dp[i][j] = ans;
}

void print(int i, int j)
{
    if (i >= a.size() or j >= b.size())
        return;
    if (a[i] == b[j])
    {
        cout << a[i];
        print(i + 1, j + 1);
        return;
    }
    int x = lcs(i + 1, j);
    int y = lcs(i, j + 1);
    if (x >= y)
        print(i + 1, j);
    else
        print(i, j + 1);
}
int32_t main()
{
    MTK;
    cin >> a >> b;
    mem(dp, -1);
    cout << lcs(0, 0) << '\n';
    print(0, 0);
    return 0;
}