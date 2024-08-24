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
bool cmp(string a, string b)
{
    return a + b < b + a;
}
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v), cmp);
    for (auto x : v)
        cout << x;
    cout << '\n';
    return 0;
}