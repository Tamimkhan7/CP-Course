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

int32_t main()
{
    MTK;
    ll n;
    cin >> n;
    int gcd = 0;
    for (int i = 2; i <= 10; i++)
        gcd = __gcd(gcd, i);
    cout << gcd << '\n';
    set<int> se;

    for (int i = 2; i <= 10; i++)
    {
        if (n % i == 0)
        {
            int p = i;
            while (n % p == 0)
                n /= p;
            se.insert(p);
        }
    }
    for (auto x : se)
        cout << x << ' ';
    cout << '\n';
    cout << se.size() << '\n';

    return 0;
}