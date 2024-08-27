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
    int n;
    cin >> n;

    vector<ll> v;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                v.push_back(i);
                n /= i;
            }
        }
    }

    if (n > 1)
        v.push_back(n);
    sort(all(v));
    for (int i = 0; i < v.size(); i++)
    {
        if (i > 0)
            cout << '*';
        cout << v[i];
    }

    return 0;
}
