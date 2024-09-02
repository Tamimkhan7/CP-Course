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
bool is_prime(int n)
{
    if (n == 0 || n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int32_t main()
{
    MTK;
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << "Case " << ++cs << ": " << n << " = ";
        for (int p = 2; p <= n; p++)
        {
            if (is_prime(p))
            {
                int exp = 0;
                for (int i = 1; i <= n; i++)
                {
                    int x = i;
                    while (x % p == 0)
                    {
                        exp++;
                        x /= p;
                    }
                }
                if (p != 2) // first case always two asbe,,ar atleast akta exponent thabeii
                    cout << " * ";
                cout << p << " (" << exp << ")";
            }
        }
        cout << '\n';
    }
    return 0;
}
/*#include <bits/stdc++.h>
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
const int N = 109;
int spf[N];
int32_t main()
{
    MTK;

    for (int i = 1; i < N; i++)
        spf[i] = i;

    for (int i = 2; i < N; i++)
    {
        for (int j = i; j < N; j += i)
            spf[j] = min(spf[j], i);
    }

    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        vector<int> ans;
        int n, xx;
        cin >> n;

        for (int i = 2; i <= n; i++)
        {
            xx = i;
            while (xx > 1)
            {
                cout << xx << ' ';
                ans.push_back(spf[xx]);
                // cout<<s
                xx /= spf[xx];
            }
            // for (auto x : ans)
            //     cout << x << ' ';
            // cout << '\n';
        }
        cout << "Case " << ++cs << ": " << n << " = ";
        map<int, int> mp;
        for (auto x : ans)
            mp[x]++;
        int sz = mp.size();
        for (auto [x, y] : mp)
        {
            if (sz > 1)
                cout << x << " (" << y << ")" << " * ";
            else
                cout << x << " (" << y << ")";
            sz--;
        }
        cout << '\n';
    }
    return 0;
}*/