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

const int N = 1e5 + 9;
int ways[N];
int count(int i)
{
    if (i == 1 || i == 2)
        return 1;
    if (i == 3)
        return 2;
    if (ways[i] != -1)
        return ways[i];
    return ways[i] = (count(i - 1) + count(i - 3)) % mod;
}
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    mem(ways, -1);
    cout << count(n) << '\n';
    return 0;
}