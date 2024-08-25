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
const int N = 1e7 + 9;
bool f[N];
int32_t main()
{
    MTK;
    // optimized code
    int n = N - 9;
    f[1] = true;
    vector<int> v;
    for (int i = 2; i * i <= n; i++)
    {
        if (!f[i])
        {
            // jodi aita akhn oh ami bad dei na tahole aita amar pirme value
            v.push_back(i);
            for (int j = i * i; j <= n; j += i)
                f[j] = true; // f[i] all divisor bad diye dicci
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (!f[i])
            v.push_back(i);
    }
    for (auto x : v)
        cout << x << ' ';
    cout << '\n';
    return 0;
}
// time complexity = O(nlog log(n)); but optimized

/* // f[1] = true;
    vector<int> v;
    for (int i = 2; i <= n; i++)
    {
        if (!f[i])
        {
            // jodi aita akhn oh ami bad dei na tahole aita amar pirme value
            v.push_back(i);
            for (int j = i + i; j <= n; j += i)
                f[j] = true; // f[i] all divisor bad diye dicci
        }
    }
    for (auto x : v)
        cout << x << ' ';
    cout << '\n';*/

// time complexity = O(nlog log(n));