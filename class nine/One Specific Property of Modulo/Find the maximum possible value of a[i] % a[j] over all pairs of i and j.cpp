// x mod m = x if (m>x)
//  x mod m < x/2 when (m<=x)
#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define llu unsigned long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v));
    reverse(all(v));
    int x = v[0];
    for (int i = 0; i < n; i++)
    {
        if (x > v[i])
        {
            cout << v[i] << '\n';
            return 0;
        }
    }
    return 0;
}