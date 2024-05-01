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

int32_t main()
{
    MTK;
    int n, m;
    cin >> n >> m;
    int a[n + 1], b[m + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        cin >> b[i];
    int l = 1, r = 1;
    vector<int> v;
    while (l <= n && r <= m)
    {
        if (a[l] >= b[r])
        {
            v.push_back(b[r]);
            r++;
        }
        else if (a[l] <= b[r])
        {
            v.push_back(a[l]);
            l++;
        }
    }
    while (l <= n)
    {
        v.push_back(a[l]);
        l++;
    }

    while (r <= m)
    {
        v.push_back(b[r]);
        r++;
    }
    for (auto x : v)
        cout << x << ' ';
    cout << '\n';
    return 0;
}