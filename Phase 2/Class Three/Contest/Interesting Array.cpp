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
const int N = 1e5 + 9, B = 30;
int a[N], r[N], l[N], required[N], ans[N];

int32_t main()
{
    MTK;
    int n, con;
    cin >> n >> con;
    for (int i = 1; i <= con; i++)
        cin >> l[i] >> r[i] >> required[i];

    for (int k = 0; k < B; k++)
    {
        for (int i = 1; i <= n; i++)
            a[i] = 0;
        for (int i = 1; i <= con; i++)
        {
            if ((required[i] >> k) & 1)
            {
                for (int j = l[i]; j <= r[i]; j++)
                    a[j] = 1;
            }
        }

        for (int i = 1; i <= con; i++)
        {
            if (!(required[i] >> k) & 1)
            {
                int cur_and = 1;
                for (int j = l[i]; j <= r[i]; j++)
                    cur_and &= a[j];
                if (cur_and != 0)
                {
                    cout << "NO\n";
                    return 0;
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i])
                ans[i] |= 1 << k;
        }
    }
    cout << "YES\n";
    for (int i = 1; i <= n; i++)
        cout << ans[i] << ' ';
    cout << '\n';
    return 0;
}