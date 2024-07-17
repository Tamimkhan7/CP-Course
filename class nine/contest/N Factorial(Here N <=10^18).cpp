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
const int mod = 10000, N = 20;
int fact[N];

int32_t
main()
{
    MTK;
    fact[0] = 1;
    for (int i = 1; i <= N; i++)
        fact[i] = 1LL * fact[i - 1] * i % mod;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n <= 19)
        {
            string s = to_string(fact[n]);
            while (s.size() < 4)
                s.insert(s.begin(), '0');
            cout << s << '\n';
        }
        else
            cout << "0000" << '\n';
    }
    return 0;
}