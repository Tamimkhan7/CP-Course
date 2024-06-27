
// find nPr = (n-1)Cr+(n-1)C(r-1)*r!//that is same formula
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
int a[N][N], fact[N];
void pre()
{
    for (int i = 0; i < N; i++)
        a[i][0] = 1;
    // for (int i = 0; i < N; i++)
    //     cout << a[i][0] << ' ';
    // cout << '\n';
    for (int i = 1; i < N; i++)
    {
        for (int j = 1; j <= i; j++)
            a[i][j] = (a[i - 1][j] + a[i - 1][j - 1]) % mod;
    }
    fact[0] = 1;
    for (int i = 1; i < N; i++)
        fact[i] = 1LL * fact[i - 1] * i % mod;
}
int nCr(int n, int r)
{
    if (n < r)
        return 0;
    return a[n][r];
}
int nPr(int n, int r)
{
    if (n < r)
        return 0;
    return 1LL * nCr(n, r) * fact[r] % mod;
}
int32_t main()
{
    MTK;
    pre();
    int n, r;
    cin >> n >> r;
    cout << nCr(n, r) << '\n';
    cout << nPr(n, r) << '\n';
    return 0;
}
// but this is solwer to the previous approach, that is total time complexity O(n*n);