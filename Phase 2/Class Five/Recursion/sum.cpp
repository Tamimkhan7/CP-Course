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

int sum(int n)
{
    if (n == 0)
        return n;
    int ans = sum(n - 1);
    return ans + n;
}

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    int res = sum(n);
    cout << res << '\n';
    return 0;
}


4---3---2---1---0