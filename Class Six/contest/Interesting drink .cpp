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
const int N = 1e5 + 9;
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        // both are correct ans for this problem
        //  int l = 1, r = n, ans = 0;
        //  while (l <= r)
        //  {
        //      int mid = (l + r) / 2;
        //      if (a[mid] <= x)
        //      {
        //          ans = mid;
        //          l = mid + 1;
        //      }
        //      else
        //          r = mid - 1;
        //  }
        auto ans = (upper_bound(a + 1, a + n + 1, x) - a) - 1;
        cout << ans << '\n';
    }
    return 0;
}