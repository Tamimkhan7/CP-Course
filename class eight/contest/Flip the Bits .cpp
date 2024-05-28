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
void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    bool ans = false;
    while (1)
    {
        if (a == b || (a.size() == 0 and b.size() == 0))
        {
            ans = true;
            break;
        }
        while (!a.empty() and !b.empty() and a.back() == b.back())
        {
            a.pop_back();
            b.pop_back();
        }
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == '1')
                a[i] = '0';
            else
                a[i] = '1';
        }
        cout << a << ' ' << b << '\n';
    }
    if (ans)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}