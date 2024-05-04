#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long
const int N = 2e5 + 9;
int a[N], n;
bool ok(int x)
{
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        if (find(v.being(), v.end(), a[i]) != v.end())
        {
            v.push_back(a[i]);
        }else
            break;
    }
}
int32_t main()
{
    MTK;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
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
    return 0;
}