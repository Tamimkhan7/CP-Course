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
int spf[N];
int32_t main()
{
    MTK;
    for (int i = 1; i < N; i++)
        spf[i] = i;

    for (int i = 2; i < N; i++)
    {
        for (int j = i; j < N; j += i)
            spf[j] = min(spf[j], i);
    }

    vector<ll> ans;
    ll n;
    cin >> n;
    while (n > 1)
    {
        ans.push_back(spf[n]);
        n /= spf[n];
    }
    int cnt = 0, pre;
    sort(all(ans));
    // for (auto x : ans)
    //     cout << x << ' ';
    cout << '\n';
    for (auto x : ans)
    {
        auto lw = lower_bound(all(ans), x);
        pre = (lw - ans.begin()) - 1;
        auto up = upper_bound(all(ans), x);
        auto val = up - lw;
        if (val == cnt and pre < *lw)
            cnt = x;
        else if (val >= cnt)
            cnt = x;
    }
    cout << cnt << '\n';
}