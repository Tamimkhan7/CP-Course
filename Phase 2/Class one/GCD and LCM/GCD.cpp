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
int GCD(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a < b)
        swap(a, b);
    return GCD(a % b, b); // return GCD(a-b, b)//that is too slow from it
}
int32_t main()
{
    MTK;
    int a, b;
    cin >> a >> b;
    cout << GCD(a, b) << '\n';
    cout << GCD(15, 10) << '\n';
    return 0;
}