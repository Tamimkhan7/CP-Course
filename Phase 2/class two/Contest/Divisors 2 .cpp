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
const int N = 1e6;
int d[N + 9];
bool ok[N + 9];

int32_t main()
{
    MTK;
    // firstly count all divisor for all number from 1 --n
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j += i)
            d[j]++;
    }
    for (int i = 1; i <= N; i++)
        ok[i] = true; // ok number true kore dicci dore nicci sokol value ai d[n]%d[m]==0 and d[n]>3

    for (int m = 1; m <= N; m++)
    {
        for (int n = m; n <= N; n += m)
        {
            if (d[n] % d[m] != 0) // check if whether d[n]%d[m], if none that's why we call that is does not divided to the d[m]
                ok[n] = false;
        }
    }
    vector<int> v;
    for (int i = 1; i <= N; i++)
    {
        if (d[i] > 3 and ok[i]) // check the condition if condition is fullfill that the time we include to the value into the vector
            v.push_back(i);
    }
    for (int i = 107; i <= v.size(); i += 108)
        cout << v[i] << '\n';
    return 0;
}

/*#include <bits/stdc++.h>
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

const int N = 1e6 + 9;
bool f[N], ans[N];
void sieve()
{
    for (ll i = 2; i < N; i++)
    {
        if (!f[i])
        {
            ans[i] = true;
            for (ll j = i * i; j < N; j += i)
                f[j] = true;

            for (ll k = 1, j = i * i; j < N; k++, j = i * i * k)
                ans[j] = true;
        }
    }
}
int32_t main()
{
    MTK;
    sieve();
    ll cnt = 0;
    // for (int i = 2; i < N; i++)
    // {
    //     if (!ans[i])
    //         cout << i << ' ';
    // }
    // cout << '\n';
    for (ll i = 2; i < N; i++)
    {
        if (!ans[i])
        {
            cnt++;
            if (cnt % 108 == 0)
                cout << i << '\n';
        }
    }
    return 0;
}*/