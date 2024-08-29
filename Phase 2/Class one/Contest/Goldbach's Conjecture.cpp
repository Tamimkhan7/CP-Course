#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const int N = 1e7 + 9;
bool f[N];
vector<int> v;

void sieve()
{
    f[1] = true;
    for (int i = 2; i * i <= N; i++)
    {
        if (!f[i])
        {
            for (int j = i * i; j <= N; j += i)
                f[j] = true;
        }
    }
    for (int i = 2; i <= N; i++)
    {
        if (!f[i])
            v.push_back(i);
    }
}
bool ok(int n)
{
    if (n <= 1)
        return false;
    return !f[n];
}
int32_t main()
{
    MTK;
    sieve();
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> prime;
        for (auto x : v)
        {
            if (x <= n)
                prime.push_back(x);
            else
                break;
        }
        // for (auto x : prime)
        //     cout << x << ' ';
        // cout << '\n';
        int ans = 0;
        for (auto a : prime)
        {
            int b = n - a;
            if (ok(b) == true and a <= b)
                ans++;
        }
        cout << "Case " << ++cs << ": " << ans << '\n';
    }
    return 0;
}
