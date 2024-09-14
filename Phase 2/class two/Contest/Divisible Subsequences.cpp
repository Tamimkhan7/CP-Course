#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int d, n;
        cin >> d >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        vector<ll> pref(n + 1, 0);
        map<int, int> freq;
        freq[0] = 1;
        int cnt = 0;

        for (int i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + v[i - 1];
            int modu = ((pref[i] % d) + d) % d;
            cnt += freq[modu];
            freq[modu]++;
        }

        cout << cnt << '\n';
    }
    return 0;
}
