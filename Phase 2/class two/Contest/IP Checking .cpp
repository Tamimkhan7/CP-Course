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
        string s, ss, a = "";
        cin >> s >> ss;

        vector<string> v, vv, ans;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '.')
            {
                v.push_back(a);
                a = "";
                i++;
            }
            a += s[i];
        }
        if (!a.empty())
            v.push_back(a);

        a = "";
        for (int i = 0; i < ss.size(); i++)
        {
            if (ss[i] == '.')
            {
                vv.push_back(a);
                a = "";
                i++;
            }
            a += ss[i];
        }
        if (!a.empty())
            vv.push_back(a);

        for (auto x : v)
        {
            ll n = stoi(x);
            a = "";
            while (n > 0)
            {
                a += to_string(n % 2);
                n /= 2;
            }

            while (a.size() < 8)
                a.push_back('0');
            reverse(all(a));
            ans.push_back(a);
        }

        int cnt = 0;
        for (int i = 0; i < 4; i++)
        {
            if (ans[i] == vv[i])
                cnt++;
        }

        if (cnt == 4)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    return 0;
}