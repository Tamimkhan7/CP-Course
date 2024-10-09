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
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            for (char c = 'a'; c <= 'z'; c++)
            {
                if (c != s[i] && c != s[i + 2])
                {
                    s[i + 1] = c;
                    break;
                }
            }
        }
    }
    cout << s << '\n';
    return 0;
}
