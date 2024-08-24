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
const int N = 2e5 + 9;
int a[N], ad[N];
int32_t main()
{
    MTK;
    int n, k, q;
    cin >> n >> k >> q;
    for (int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        a[l] += 1;
        a[r + 1] -= 1;
    }
    for (int i = 1; i <= N; i++)
    {
        a[i] += a[i - 1];
        if (a[i] >= k) // ad[i]=(a[i]>=k) both are same
            ad[i] = 1;
    }
    // for (int i = 1; i <= N; i++)
    //     cout << ad[i] << ' ';
    // cout << '\n';
    for (int i = 1; i <= N; i++)
        ad[i] += ad[i - 1];

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << ad[r] - ad[l - 1] << '\n';
    }

    return 0;
}