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

int power(int x, int n, int mod)
{
    int ans = 1 % mod;
    while (n)
    {
        if (n & 1)
            ans = 1LL * ans * x % mod;
        x = 1LL * x * x % mod;
        n >>= 1;
    }
    return ans;
}
int trailing_3(int n, int k)
{
    return power(n, k, 1000);
}
int leading_3(int n, int k)
{
    double p = k * log10(n);
    double q = p - floor(p);
    double x = pow(10, q);
    return floor(x * 100); // tahole point ar por two ghor add hoye jabe point ar ager value ar sathe
}
string formate(int x)
{
    string s = to_string(x);
    while (s.size() < 3)
        s.insert(s.begin(), '0');
    return s;
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << formate(leading_3(n, k)) << "..." << formate(trailing_3(n, k)) << '\n';
    }
    return 0;
}