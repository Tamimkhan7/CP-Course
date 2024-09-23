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
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        cout << "Case " << ++cs << ": ";
        string a;
        int b;
        cin >> a >> b; // modulas arithmatic negative kono reasone thake na,,, always positive rakhte hoy
        if (a[0] == '-')
            a.erase(a.begin());
        b = abs(b);
        int ans = 0;
        for (auto x : a)
        {
            int digit = x - '0';                      // convert char to digit
            ans = ((1LL * ans * 10) % b + digit) % b; // append string last char into the answer
        }
        if (ans == 0)
            cout << "divisible" << '\n';
        else
            cout << "not divisible" << '\n';
    }
    return 0;
}