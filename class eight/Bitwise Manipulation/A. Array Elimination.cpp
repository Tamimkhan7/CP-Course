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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        vector<int> cnt(30, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            for (int j = 0; j < 30; j++)
            {
                if (a[i] >> j & 1)
                    cnt[j]++;
            }
        }
        // for (auto x : cnt)
        //     cout << x << ' ';
        // cout << '\n';
        for (int k = 1; k <= n; k++)
        {
            bool ok = true;
            for (int j = 0; j < 30; j++)
            {
                if (cnt[j] % k != 0)
                    ok = false;
            }
            if (ok)
                cout << k << ' ';
        }
        cout << '\n';
    }
    return 0;
}