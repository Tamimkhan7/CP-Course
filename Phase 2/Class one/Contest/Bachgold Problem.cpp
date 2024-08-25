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

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << '\n';
        int x = n / 2;
        while (x--)
            cout << 2 << ' ';
        cout << '\n';
    }
    else
    {
        cout << n / 2 << '\n';
        int x = n / 2;
        x--;
        while (x--)
            cout << 2 << ' ';
        cout << 3 << '\n';
    }
    return 0;
}