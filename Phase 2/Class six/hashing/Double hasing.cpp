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

// p1 and p2 is a prime number,we can use the prime number because is it safe zone
const int p1 = 137, p2 = 277, N = 1e5;
int pw1[N], pw2[N];

void prec()
{
    pw1[0] = 1;
    for (int i = 1; i <= N; i++)
        pw1[i] = 1LL * pw1[i - 1] * p1 % mod;

    pw2[0] = 1;
    for (int i = 1; i <= N; i++)
        pw2[i] = 1LL * pw2[i - 1] * p2 % mod;
}

pair<int, int> get_hash(string s)
{
    int n = s.size();
    int hs1 = 0;
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