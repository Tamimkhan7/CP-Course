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
int value(int b, int c)
{
    if (c == 0)
        return 1 % mod;
    int curr = value(b, c / 2); // divide part
    if (c % 2 == 0)
        return 1LL * curr * curr % mod; // conquer part
    else
        return 1LL * curr * curr % mod * b % mod;
}

int power(int a, int b)
{
    if (b == 0)
        return 1 % mod;
    int curr = power(a, b / 2);
    if (b % 2 == 0)
        return 1LL * curr * curr % mod;
    else
        return 1LL * curr * curr % mod * a % mod;
}

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        b = value(b, c);
        cout << power(a, b) << '\n';
    }
    return 0;
}