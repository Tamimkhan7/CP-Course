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
        vector<int> cnt(30, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            for (int j = 0; j < 30; j++)
            {
                if ((x >> j) & 1)
                    cnt[j]++; // protita bit ar jonno 1  ar count kore rekheci
            }
        }
        // for (int i = 0; i < 30; i++)
        //     cout << i << ' ' << cnt[i] << '\n';
        for (int k = 1; k <= n; k++)
        {
            bool flag = true;
            for (int i = 0; i < 30; i++)
            {
                if (cnt[i] % k != 0)
                {
                    flag = false; // oi bit ar one ar count jodi k ar divisible na hoy tahole aita 0 kora possible na
                    break;
                }
            }
            if (flag)
                cout << k << ' ';
        }
        cout << '\n';
    }
    return 0;
}