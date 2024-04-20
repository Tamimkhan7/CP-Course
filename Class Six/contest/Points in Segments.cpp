#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

int main()
{
    int t;
    cin >> t;
    for (int test = 1; test <= t; test++)
    {
        cout << "Case " << test << ":" << '\n';
        int n, q;
        cin >> n >> q;
        int ar[n + 8];
        for (int i = 1; i <= n; i++)
            cin >> ar[i];
        while (q--)
        {
            int a, b;
            cin >> a >> b;
            auto l = lower_bound(ar + 1, ar + n + 1, a);
            auto r = upper_bound(ar + 1, ar + n + 1, b);
            cout << r - l << '\n';
        }
    }
}
