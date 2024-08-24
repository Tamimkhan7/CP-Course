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
const int N = 1e6 + 9;
int f(int n)
{
    int pro = 1;
    while (n > 0)
    {
        int last_digit = n % 10;
        if (last_digit != 0)
            pro *= last_digit;
        n /= 10;
    }
    return pro;
}
int g(int n)
{
    if (n < 10)
        return n;
    return g(f(n));
}
int G[N];
vector<int> v[10];
int32_t main()
{
    MTK;
    for (int i = 1; i < N; i++)
    {
        G[i] = g(i); // find all digit product
        // now all digit product store to the vector
        v[G[i]].push_back(i); // Push i into the vector at index G[i]
        // cout << v[G[i]] << ' ' << i << '\n';
        // for (int j = 0; j < v[G[i]].size(); ++j)
        // {
        //     cout << v[G[i]][j] << ' '; // Print each element of the vector
        // }
        // cout << '\n';
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        int ans = 0;
        // this value to the store in ascending type on the vector
        //  brute force way
        //  but ai vabe korle TLE asbe
        //  for (int x = l; x <= r; x++)
        //  {
        //      if (g(x) == k)
        //          ans++;
        //  }
        //  another way to the find the result
        // for (auto x : v[k])
        // {
        //     if (x >= l and x <= r)
        //         ans++;
        // }
        // this is best approach to the find result
        ans = upper_bound(v[k].begin(), v[k].end(), r) - lower_bound(v[k].begin(), v[k].end(), l);
        cout << ans << '\n';
    }
    return 0;
}