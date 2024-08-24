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
int n, a[N], b[N];

void solve(int l, int r)
{
    if (l >= r)
        return;
    // that is divide part and will be process recursion formula
    int mid = (l + r) / 2;
    solve(l, mid);
    solve(mid + 1, r);
    // auto divide hoye hoye gece akhn marge korte hobe two ta divide part theke

    // conqure part
    int lp = l, rp = mid + 1;
    for (int i = l; i <= r; i++)
    {
        if (lp > mid)
            b[i] = a[rp++];
        else if (rp > r)
            b[i] = a[lp++];
        else if (a[lp] <= a[rp])
            b[i] = a[lp++];
        else
            b[i] = a[rp++];
    }
    for (int i = l; i <= r; i++)
        a[i] = b[i];
}
int32_t main()
{
    MTK;
    int x;
    while (cin >> x)
    {
        n++;
        a[n] = x;
    }
    solve(1, n);
    for (int i = 1; i <= n; i++)
        cout << a[i] << ' ';
    cout << '\n';
    return 0;
}