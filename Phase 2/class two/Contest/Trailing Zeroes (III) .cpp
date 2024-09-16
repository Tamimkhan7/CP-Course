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
#define mod 1000000007
const int N = 1e8;

int fact_trailing_zeros(int n)
{
    int cnt = 0;
    // for (int i = 5; n / i >= 1; i *= 5)
    //     cnt += n / i;
    while (n != 0)
    {
        cnt += n / 5;
        n /= 5;
    }
    return cnt;
}

int find_min_n(int q)
{
    int l = 0, r = N * 5;
    int ans = -1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        int zeros = fact_trailing_zeros(mid);

        if (zeros == q)
        {
            ans = mid;
            r = mid - 1;
        }
        else if (zeros < q)
            l = mid + 1;
        else
            r = mid - 1;
    }

    return ans;
}

int32_t main()
{
    MTK;
    int t, cs = 0;
    cin >> t;

    while (t--)
    {
        cout << "Case " << ++cs << ": ";
        int q;
        cin >> q;

        if (find_min_n(q) == -1)
            cout << "impossible" << '\n';
        else
            cout << find_min_n(q) << '\n';
    }

    return 0;
}
