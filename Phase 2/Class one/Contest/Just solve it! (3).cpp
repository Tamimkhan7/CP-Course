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
const int N = 1e6 + 9, M = 1e6;
int d[N], cnt[N];
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    for (int k = 1; k <= n; k++)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }
    for (int i = 1; i < N; i++)
    {
        for (int j = i; j < N; j += i)
            d[i] += cnt[j];
    }
    for (int i = 1; i <= M; i++)
        cout << d[i] << ' ';
    cout << '\n';
    return 0;
}
