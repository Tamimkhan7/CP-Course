// using two pointer algorithm basic
// marge sort  algorithm

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

int32_t main()
{
    MTK;
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int i = 0, j = 0;
    vector<int> ans;
    while (i < n and j < m)
    {
        if (a[i] < b[j])
            ans.push_back(a[i++]);
        else
            ans.push_back(b[j++]);
    }
    while (i < n)
        ans.push_back(a[i++]);

    while (j < m)
        ans.push_back(b[j++]);

    for (auto x : ans)
        cout << x << ' ';
    cout << '\n';
    return 0;
}