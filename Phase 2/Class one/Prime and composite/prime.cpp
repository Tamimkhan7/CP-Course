
// prime holo jar two ta divisor ace sei prime

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
    vector<int> v;
    for (int i = 2; i <= n; i++)
    {
        bool ok = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                ok = false;
                break;
            }
        }
        if (ok)
            v.push_back(i);
    }
    cout << "total number of prime:- " << v.size() << '\n';
    sort(all(v));
    for (auto x : v)
        cout << x << ' ';
    cout << '\n';
    return 0;
}