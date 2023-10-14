#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned int n;
        cin >> n;
        unsigned int ans = 0;
        for (int i = 0; i < 32; i++)
        {
            if (!((n >> i) & 1))
            {
                ans += 1 << i;
            }
        }
        cout << ans << endl;
    }
}