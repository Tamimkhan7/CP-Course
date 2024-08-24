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
    int n;
    cin >> n;
    vector<ll> v;
    for (int i = 2; i <= sqrt(n); i++)
    {
        ll x = i * i;
        if (x <= n)
            v.push_back(x);
        else
            break;
    }
    sort(all(v));
    for (auto x : v)
        cout << x << ' ';
    cout << '\n';
    return 0;
}