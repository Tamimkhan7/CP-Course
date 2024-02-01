#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        deque<int> a, r;
        for (int i = 1; i <= n; i++)
            a.push_back(i);

        while (!a.empty())
        {
            int x = a.front();
            r.push_back(x);
            a.pop_front();
            if (!a.empty())
            {
                int y = a.back();
                r.push_back(y);
                a.pop_back();
            }
        }
        for (auto x : r)
            cout << x << ' ';

        cout << '\n';
    }
}