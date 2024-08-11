#include <bits/stdc++.h>
using namespace std;
// #define MTK                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define mem(a, b) memset(a, b, sizeof(a))
// #define trace(x) cout << #x << ' ' << x << endl
// #define all(x) (x).begin(), (x).end()
// #define ll int long long
// #define mod 1000000007
int ok(int l, int r)
{
    if (l >= r)
        return -1;
    cout << "? " << l + 1 << ' ' << r + 1 << '\n';
    int x;
    cin >> x;
    return x - 1;
}
int32_t main()
{
    // MTK;
    int n;
    cin >> n;
    int l = 0, r = n;
    while (r - l > 1)
    {
        int mid = (l + r) / 2;
        int second_max = ok(l, r - 1);
        if (second_max < mid)
        {
            if (ok(l, mid - 1) == second_max)
                r = mid;
            else
                l = mid;
        }
        else
        {
            if (ok(mid, r - 1) == second_max)
                l = mid;
            else
                r = mid;
        }
    }
    cout << "! " << r << '\n';
    return 0;
}