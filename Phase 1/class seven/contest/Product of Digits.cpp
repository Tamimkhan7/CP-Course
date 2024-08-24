#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    if (n == 0)
        cout << 10 << '\n';
    else if (n == 1)
    {
        cout << n << '\n';
        return 0;
    }
    else
    {
        vector<int> ans;
        for (int i = 9; i > 1; i--)
        {
            while (n % i == 0)
            {
                ans.push_back(i);
                n /= i;
            }
        }
        // cout << n << '\n';
        if (n != 1)
            cout << -1 << '\n';
        else
        {
            reverse(ans.begin(), ans.end());
            for (int i = 0; i < (int)ans.size(); i++)
                cout << ans[i];
            cout << '\n';
        }
    }
}
