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

// p is a prime number,we can use the prime number because is it safe zone
const int p = 137, N = 1e5;
int pw[N];

void prec()
{
    pw[0] = 1;
    for (int i = 1; i <= N; i++)
        pw[i] = 1LL * pw[i - 1] * p % mod;
}

int get_hash(string s)
{
    int n = s.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += 1LL * s[i] * pw[i] % mod;
        ans %= mod;
    }
    return ans;
}
int32_t main()
{
    MTK;
    prec();
    string a, b;
    cin >> a >> b;
    cout << get_hash(a) << ' ' << get_hash(b) << '\n';
    return 0;
}