
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

const int N = 1e3 + 9;
int ways[N];

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    mem(ways, 0);
    ways[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        // let i = 4
        for (int j = 1; j <= i; j++)
        {
            ways[i] += ways[i - j];
            ways[i] %= mod;
        }
    }
    cout << ways[n] << '\n';
    return 0;
}
