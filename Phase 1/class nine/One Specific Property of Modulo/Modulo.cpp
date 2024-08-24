#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long
const int N = 1e5 + 7;
ll a[N];
int32_t main()
{
    MTK;
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        priority_queue<pair<ll, int>> q;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            q.push({a[i], i});
        }
        int Q;
        cin >> Q;
        while (Q--)
        {
            ll m;
            cin >> m;
            // for (int i = 1; i <= n; i++)
            //     a[i] = a[i] % m;
            while (!q.empty())
            {
                auto [x, i] = q.top();
                if (x < m)
                    break;
                q.pop();
                q.push({x % m, i});
            }
        }
        while (!q.empty())
        {
            auto [x, i] = q.top();
            q.pop();
            a[i] = x;
        }
        cout << "Case " << ++cs << ":" << '\n';
        for (int i = 1; i <= n; i++)
            cout << a[i] << (i < n ? ' ' : '\n');
    }
    return 0;
}