#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long
void print(vector<int> &v)
{
    for (auto x : v)
        cout << x << ' ';
    cout << '\n';
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    if (is_sorted(v.begin(), v.end()))
    {
        cout << "Yes" << '\n';
        return;
    }
    reverse(v.begin(), v.end());
    for (int i = 1; i <= n; i++)
    {
        if (v[i] > v[i + 2])
        {
            swap(v[i], v[i + 1]);
            print(v);
            if (is_sorted(v.rbegin(), v.rend()))
            {
                cout << "Yes" << '\n';
                return;
            }
        }
        if (v[i] < v[i + 2])
        {
            v[i + 2] = v[i + 1] + v[i + 2];
            print(v);
            if (is_sorted(v.rbegin(), v.rend()))
            {
                cout << "Yes" << '\n';
                return;
            }
        }
        i = 0;
    }

    if (is_sorted(v.rbegin(), v.rend()))
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
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