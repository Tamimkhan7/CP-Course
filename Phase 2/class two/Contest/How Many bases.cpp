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
#define mod 100000007

int solve_greater_than_or_equal(vector<int> e, int t)
{
    int ans = 1;
    for (int i = 0; i < e.size(); i++)
        ans = 1LL * ans * (e[i] / t + 1) % mod;

    return ans;
}
int solve_equal(vector<int> e, int t)
{
    return (solve_greater_than_or_equal(e, t) - solve_greater_than_or_equal(e, t + 1) + mod) % mod;
}

int32_t main()
{
    MTK;
    int n, m, t, cs = 0;
    while (cin >> n >> m >> t and n > 0)
    {
        vector<int> e;
        for (int i = 2; i * i <= n; i++)
        {
            int x = i;
            if (n % x == 0)
            {
                int cnt = 0;
                while (n % x == 0)
                {
                    cnt++;
                    n /= x;
                }
                e.push_back(cnt * m);
            }
        }
        if (n > 1)
            e.push_back(1 * m);
        cout << "Case " << ++cs << ": ";
        cout << solve_equal(e, t) << '\n';
    }
    return 0;
}