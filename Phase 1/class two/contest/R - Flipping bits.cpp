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
            if (!((n >> i) & 1)) // mane holo kon bit ta off ace oi tar kace giye filp kore dicci
            {
                ans += 1 << i; // and ans ar sathe 2^i add kore dicci,
            }
        }
        cout << ans << endl;
    }
}