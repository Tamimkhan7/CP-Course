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
        int bit[32];
        for (int i = 0; i < 32; i++)
        {
            bit[i] = (n >> i) & 1; // porita last value ber kore nilam
        }
        reverse(bit, bit + 32); // using reverse function
        for (int i = 0; i < 32; i++)
        {
            if (bit[i]) // jodi bit ta 1 hoy tahole ami ans ar sathe 2^i add kore dicci
            {
                ans += 1 << i;
            }
        }
        cout << ans << endl;
    }
}