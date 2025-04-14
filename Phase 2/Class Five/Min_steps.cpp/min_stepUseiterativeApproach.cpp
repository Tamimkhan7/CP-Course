#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
const int N = 1e5 + 9;
int step[N];

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    step[0] = 1;
    for (int i = 2; i <= n; i++)
    {
        int ans = step[i - 1] + 1;

        if (i % 2 == 0)
            ans = min(ans, step[i / 2] + 1);
        if (i % 3 == 0)
            ans = min(ans, step[i / 3] + 1);
        // show(ans);
        step[i] = ans;
        // cout << i << ' ' << step[i] << '\n';
    }
    cout << step[n] << '\n';
    return 0; ii 
}