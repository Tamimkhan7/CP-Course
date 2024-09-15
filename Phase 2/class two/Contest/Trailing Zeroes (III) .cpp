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

int fact(int n)
{
    int cnt = 0;
    for (int i = 5; n / i >= 1; i *= 5)
        cnt += n / i;
    return cnt;
}

int32_t main()
{
    MTK;
    map<int, int> mp;

    for (int i = 1; i < N; i++)
    {
        int x = fact(i);
        if (mp.find(x) == mp.end())
            mp[x] = i;
    }

    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        cout << "Case " << ++cs << ": ";
        int n;
        cin >> n;

        if (mp.find(n) != mp.end())
            cout << mp[n] << '\n';
        else
            cout << "impossible" << '\n';
    }

    return 0;
}
