#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll int long long
const int N = 2e5 + 9;
string t, p;
int n, a[N];
bool subsequence(string s)
{
    int n = s.size();
    int i = 0;
    for (auto c : p)
    {
        while (i < n and s[i] != c)
        {
            // cout << c << ' ' << s[i] << '\n';
            i++;
        }
        // cout << i << '\n';
        if (i >= n)
            return false;
        i++;
    }
    return true;
}
bool ok(int x)
{
    // cout << x << '\n';
    vector<bool> alive(n, true);
    for (int i = 1; i <= x; i++)
    {
        alive[a[i]] = false;
        // cout << alive[a[i]] << ' ';
    }
    // cout << '\n';
    string s = "";
    for (int i = 0; i < n; i++)
    {
        if (alive[i])
            s += t[i];
    }
    // cout << s << '\n';
    return subsequence(s);
}
int32_t main()
{
    MTK;
    cin >> t >> p;
    n = t.size();
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i]--;
    }
    int l = 1, r = n, ans = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << '\n';

    return 0;
}
