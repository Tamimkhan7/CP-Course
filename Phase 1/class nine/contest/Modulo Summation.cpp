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
#define mod 1000000007
const int N = 1e6 + 9;
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    ll x = 0, p = n;
    while (n--)
    {
        int a;
        cin >> a;
        x += a;
    }
    cout << x - p << '\n';

    return 0;
}