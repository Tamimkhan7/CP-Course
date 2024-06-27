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
const ll mod = 1e18 + 7;
const int N = 1020;
ll fact[N];
int32_t main()
{
    MTK;
    fact[0] = 1 % mod;
    for (int i = 1; i < N; i++)
        fact[i] = fact[i - 1] * i % mod;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
            if (fact > 10000)
                fact %= 10000;
        }
        ll p = fact;
        string s = to_string(fact);
        if (s.size() == 4)
            cout << s << '\n';
        else if (s.size() > 4)
            cout << p % 10000 << '\n';
        else
        {
            int c = 4 - s.size();
            while (c--)
                cout << 0;
            cout << s << '\n';
        }
    }
}
