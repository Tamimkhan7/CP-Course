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
// jehetu p prime tai kaj korte parci
// fermat's little theorem theke jante parci akta cycle hocce seta (p-1) ar tai a^b^c = (b,c)ke (p-1)diye mod korle correct ans asbe
int power1(int a, int b, int mod)
{
    // using iterative approach
    int ans = 1 % mod;
    while (b > 0)
    {
        if (b & 1)
            ans = 1LL * ans * a % mod;

        a = 1LL * a * a % mod;
        b >>= 1;
    }
    return ans;
}

int power(int a, int b, int mod)
{
    vector<int> pw(30, 0);
    pw[0] = a % mod;
    for (int i = 1; i <= 30; i++)
        pw[i] = 1LL * pw[i - 1] * pw[i - 1] % mod;
    int ans = 1 % mod;
    for (int i = 0; i <= 30; i++)
    {
        if (b >> i & 1)
            ans = 1LL * ans * pw[i] % mod;
    }
    return ans % mod;
}

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    int mod = 1e9 + 7;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        b = power1(b, c, mod - 1);
        cout << power1(a, b, mod) << '\n';
    }
    return 0;
}