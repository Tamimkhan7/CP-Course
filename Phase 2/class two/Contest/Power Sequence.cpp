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

const ll MAX = 2e14;
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    ll ans = MAX;
    for (int c = 1;; c++)
    {
        ll operation = 0;
        vector<__int128_t> c_pw(n);
        c_pw[0] = 1;
        for (int i = 1; i < n; i++)
            c_pw[i] = c_pw[i - 1] * c;

        // for (int i = 0; i < n; i++)
        //     cout << c_pw[i] << ' ';
        // cout << '\n';
        if (c_pw[n - 1] > MAX)
            break;
        for (int i = 0; i < n; i++)
        {
            operation += abs(a[i] - (long long)c_pw[i]);
            if (operation > MAX)
                break;
        }
        ans = min(ans, operation);
    }
    cout << ans << '\n';
    return 0;
}