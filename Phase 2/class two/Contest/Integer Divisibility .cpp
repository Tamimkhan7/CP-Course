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

int32_t main()
{
    MTK;
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        int n, digit;
        cin >> n >> digit;
        ll ans = 0;
        int cnt = 0;
        while (1)
        {
            cnt++;
            ans = (ans * 10 + digit) % n;
            if (ans == 0)
            {
                cout << "Case " << ++cs << ": " << cnt << '\n';
                break;
            }
        }
    }
    return 0;
}