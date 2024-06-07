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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> even, odd, a, b, ans;
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (i % 2)
                    odd.push_back(i);
                else
                    even.push_back(i);
            }
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                if (i % 2)
                    odd.push_back(i);
                else
                    even.push_back(i);
            }
        }
        int p = even.size();
        int q = odd.size();
        // int pq = max(p.q);
        if (even.size() > 1 and p > q)
        {
            int x = even.back();
            even.pop_back();
            int y = even.back();
            even.pop_back();
            ans.push_back(y);
            ans.push_back(x);
        }
        else
        {
            int x = odd.back();
            odd.pop_back();
            int y = odd.back();
            odd.pop_back();
            ans.push_back(y);
            ans.push_back(x);
        }

        // for (auto x : ans)
        //     cout << x << ' ';
        // cout << '\n';
        while ((odd.size() > 1) || (even.size() > 1))
        {
            if ((odd.size() > 1) and (ans.back() % 2 == 0))
            {
                int x = odd.back();
                odd.pop_back();
                int y = odd.back();
                odd.pop_back();
                ans.push_back(x);
                ans.push_back(y);
            }
            else if ((even.size() > 1) and (ans.back() % 2 != 0))
            {
                int x = even.back();
                even.pop_back();
                int y = even.back();
                even.pop_back();
                ans.push_back(x);
                ans.push_back(y);
            }
        }
        // cout << odd.size() << ' ' << even.size() << '\n';
        if (odd.size() > 0 and (ans.back() % 2 == 0))
        {
            int x = odd.back();
            odd.pop_back();
            ans.push_back(x);
        }
        if (even.size() > 0 and (ans.back() % 2 != 0))
        {
            int x = even.back();
            even.pop_back();
            ans.push_back(x);
        }
        // ans.pop_back();
        for (auto x : ans)
            cout << x << ' ';
        cout << '\n';
    }
    return 0;
}