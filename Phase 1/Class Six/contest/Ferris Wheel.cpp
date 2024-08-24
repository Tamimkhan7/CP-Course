#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long ll;
#define all(x) x.begin(), x.end()

int main()
{
    MTK;
    int n, x;
    cin >> n >> x;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    // using two_pointer technique for optimization
    int ans = 0, l = 1, r = n;
    while (l <= r)
    {
        if (a[l] + a[r] <= x)
        {
            l++, r--;
        }
        else
            r--;
        // cout << l << ' ' << r << '\n';
        ans++;
    }
    cout << ans << '\n';
}
