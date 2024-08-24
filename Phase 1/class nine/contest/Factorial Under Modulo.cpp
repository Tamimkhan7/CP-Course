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
#define mod 998244353

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact = 1LL * fact * i % mod;
    cout << fact<< '\n';

    return 0;
}