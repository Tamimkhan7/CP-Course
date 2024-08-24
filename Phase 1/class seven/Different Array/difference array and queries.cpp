#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

const int N = 1e6 + 7;
int a[N], d[N], p[N]; // global initialization all value, when we initialization global any container all value is 0
int32_t main()
{
    MTK;
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
        d[i] = a[i] - a[i - 1];
    while (q--)
    {
        int l, r, x;
        cin >> l >> r >> x;
        d[l] += x;
        d[r + 1] -= x;
    }
    for (int i = 1; i <= n; i++)
        p[i] = p[i - 1] + d[i];
    for (int i = 1; i <= n; i++)
        cout << p[i] << ' ';
    cout << '\n';
}
// aita uniquely kora jay
//  while (q--)
//  {
//      int l, r, x;
//      cin >> l >> r >> x;
//      for (int i = l; i <= r; i++)
//          a[i] += x;
//  }