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
        string s;
        ll b;
        cin >> s >> b;
        b = abs(b);
        ll rem = 0, start = 0;

        if (s[0] == '-')
            start = 1;

        for (int i = start; i < s.size(); ++i)      
            rem = (rem * 10 + (s[i] - '0')) % b;
        
       
        if (rem == 0)
            cout << "Case " << ++cs << ": divisible" << '\n';
        else
            cout << "Case " << ++cs << ": not divisible" << '\n';
    }
    return 0;
}







