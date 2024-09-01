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

const int N = 1e6 + 9;
bool f[N];
bool ok(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
bool ok2(int n)
{
    string s = to_string(n);
    for (auto x : s)
    {
        if (x == '0')
            return false;
    }
    return true;
}
int32_t main()
{
    MTK;
    f[1] = true;
    vector<int> v;
    for (int i = 2; i * i <= N; i++)
    {
        if (!f[i])
        {
            v.push_back(i);
            for (int j = i * i; j <= N; j += i)
                f[j] = true;
        }
    }
    for (int i = 2; i <= N; i++)
    {
        if (!f[i])
            v.push_back(i);
    }
    // for (auto x : v)
    //     cout << x << ' ';
    // cout << '\n';

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sz = v.size();
        int ans = 0;
        for (int i = 0; i <= sz; i++)
        {
            int x = v[i];
            if (x > n)
                break;
            if (ok2(x))
                ans++;
        }

        cout << ans << '\n';
    }
    return 0;
}
