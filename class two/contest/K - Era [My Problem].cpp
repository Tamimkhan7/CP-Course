#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // vector<int> v(n);
        // for (int i = 0; i < n; i++)
        //     cin >> v[i];
        // int ans = 0;
        // for (int i = 0; i < n - 1; i++)
        // {
        //     if (v[i] < v[i + 1])
        //     {
        //         int res = v[i + 1] - v[i];
        //         if (res > 1)
        //         {
        //             ans += (v[i + 1] - v[i]);
        //             ans -= 1;
        //         }
        //     }
        // }

        // if (v[0] != 1)
        // {
        //     ans += v[0] - 1;
        //     cout << ans << endl;
        // }
        // else
        //     cout << ans << endl;
        // another way te try kori
        int a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] > i)
            {
                ans = max(ans, a[i] - i);
            }
        }
        cout << ans << endl;
    }
}