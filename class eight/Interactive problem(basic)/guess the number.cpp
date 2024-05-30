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
string ok(int x)
{
    cout << x << '\n';
    string s;
    cin >> s;
    return s;
}
int32_t main()
{
    int l = 1, r = 30;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        string s = ok(mid);
        if (s == "equal")
        {
            cout << "ok answer is " << mid << '\n';
            return 0;
        }
        else if (s == "big")
            l = mid + 1;
        else
            r = mid - 1;
    }
    return 0;
}
