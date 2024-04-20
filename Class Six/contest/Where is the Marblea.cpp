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
    int n, q;
    int test_case = 1;
    while (cin >> n >> q)
    {
        if (n == 0 and q == 0)
            break;
        cout << "CASE# " << test_case << ":" << '\n';
        int a[n + 8];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        while (q--)
        {
            int x, ans = -1;
            cin >> x;
            int l = 1, r = n;
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (a[mid] == x)
                {
                    ans = mid;
                    r = mid - 1;
                }
                else if (a[mid] < x)
                {
                    l = mid + 1;
                }
                else
                    r = mid - 1;
            }

            if (ans != -1)
                cout << x << " found at " << ans << '\n';
            else
                cout << x << " not found" << '\n';
        }
        test_case++;
    }
}
