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
    for (int i = 1; i <= n; i++)
    {
        bool flag = false;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                cout << i << ' ' << j << '\n';
                flag = true;
                break;
            }
        }
        // if (!flag)
        //     cout << i << ' ' << i << '\n';
    }
    return 0;
}