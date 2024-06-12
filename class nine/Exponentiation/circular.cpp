// given two integer x and n, find x^n modulo m

// constrains 1<=x <=1e^10, 0<=n<=1e9, 1<=m<=1e9(mod id small, but n is large)

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

int power(int x, int n, int mod)
{
    if (mod == 1)
        return 0;
    vector<int> v;
    v.push_back(1);
    vector<bool> vis(mod, false);
    vis[1] = true;
    int cur = 1, st = 0; // st means starting point
    while (1)
    {
        cur = 1LL * cur * x % mod;
        if (vis[cur])
        {
            // joid visited kore tahole oi index ta ber kore nicci
            st = find(v.begin(), v.end(), cur) - v.begin();
            break;
        }
        else
        {
            vis[cur] = true;
            v.push_back(cur);
        }
    }
    // for (auto x : v)
    //     cout << x << ' ';
    // cout << '\n';
    // cout << st << '\n';
    int circular_length = (int)v.size() - st;
    if (n < st)
        return v[n];
    n -= st;
    return v[st + n % circular_length];

    // return ans;
}
int32_t main()
{
    MTK;
    int x = 3, n = 20, m = 21;
    cout << power(x, n, m) << '\n';
    return 0;
}