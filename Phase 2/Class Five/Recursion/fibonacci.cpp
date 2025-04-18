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

const int N = 55;
int f[N]; // for storing value
bool is_computed[N];

int fibo(int n)
{
    if (n == 0 || n == 1)
        return n;
    if (is_computed[n])
        return f[n];
    f[n] = fibo(n - 1) + fibo(n - 2);
    is_computed[n] = true;
    return f[n];
}

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    int res = fibo(n);
    cout << res << '\n';
    return 0;
}