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
}