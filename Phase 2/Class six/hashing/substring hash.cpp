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

const int p1 = 137, p2 = 277, N = 1e6 + 9;

int power(int x, int n, int mod)
{
    int ans = 1 % mod;
    while (n > 0)
    {
        if (n & 1)
            ans = 1LL * ans * x % mod;

        x = 1LL * x * x % mod;
        n >>= 1;
    }
    return ans;
}

int ip1, ip2;
pair<int, int> pw[N], ipw[N];

void prec()
{
    pw[0] = {1, 1};
    for (int i = 1; i <= N; i++)
    {
        pw[i].first = 1LL * pw[i - 1].first * p1 % mod;
        pw[i].second = 1LL * pw[i - 1].second * p2 % mod;
    }

    pw2[0] = 1;
    for (int i = 1; i <= N; i++)
        pw2[i] = 1LL * pw2[i - 1] * p2 % mod;
}

pair<int, int> get_hash(string s)
{
    int n = s.size();
    pair<int, int> hs({0, 0});
    for (int i = 0; i < n; i++)
    {
        hs1 += 1LL * s[i] * pw1[i] % mod;
        hs1 %= mod;
    }

    int hs2 = 0;
    for (int i = 0; i < n; i++)
    {
        hs2 += 1LL * s[i] * pw2[i] % mod;
        hs2 %= mod;
    }
    return {hs1, hs2};
}
int32_t main()
{
    MTK;
    prec();
    string a, b;
    cin >> a >> b;
    cout << (get_hash(a) == get_hash(b)) << '\n';
    return 0;
}