
// find nCr = (n-1)Cr+(n-1)C(r-1)//that is same formula

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
const int N = 1e3 + 9;
int a[N][N];
void pre()
{
    for (int i = 0; i < N; i++)
        a[i][0] = 1;
    for (int i = 1; i < N; i++)
    {
        for (int j = 1; j <= i; j++)
            a[i][j] = (a[i - 1][j] + a[i - 1][j - 1]) % mod;
    }
}
int32_t main()
{
    MTK;
    pre();
    cout << a[4][2] << '\n';
    return 0;
}