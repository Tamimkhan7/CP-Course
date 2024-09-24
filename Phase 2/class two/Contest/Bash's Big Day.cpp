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
const int N = 1e5 + 9;
int a[N], freq[N];
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    // for (int i = 1; i <= n; i++)
    //     cout << i << ' ' << freq[i] << '\n';
    int ans = 0;
    for (int i = 2; i < N; i++)
    {
        int cnt = 0;
        for (int j = i; j < N; j += i)
        {
            cnt += freq[j];
            // cout << cnt << '' << freq[j] << '\n';
        } 
        ans = max(ans, cnt);
    }
    cout << max(ans, 1) << '\n';
    return 0;
}