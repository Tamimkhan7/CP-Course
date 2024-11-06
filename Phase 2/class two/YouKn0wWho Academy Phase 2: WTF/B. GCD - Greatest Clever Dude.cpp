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
string gcd(string a, string b)
{
    if (a.size() < b.size())
        return gcd(b, a);
    else if (a.find(b) != 0)
        return "";
    else if (b == "")
        return a;
    else
        return gcd(a.substr(b.size()), b);
}
int32_t main()
{
    MTK;
    string a, b;
    cin >> a >> b;
    if (a == b)
        cout << a << '\n';
    else
        cout << 1 << '\n';
    return 0;
}