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
int d[N];
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
            d[j]++;
    }
    for (int i = 1; i <= n; i++)
        cout << i << ' ' << d[i] << '\n';
    return 0;
}

// time ==  O(nlog lon(n))