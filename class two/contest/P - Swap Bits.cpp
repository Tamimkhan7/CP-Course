#include <bits/stdc++.h>
using namespace std;
#define llu unsigned long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        llu ans = 0;
        for (int i = 0; i < 32; i += 2)
        {
            int a = (n >> i) & 1;       // that means n ke i tom bit ber korlam dekhlam je i ar bit a 1 kina
            int b = (n >> (i + 1)) & 1; // that means i+1 tom bit ta ki ace
            swap(a, b);
            if (a)
            {
                ans += 1 << i;
            }
            if (b)
            {
                ans += 1 << (i + 1);
            }
        }
        cout << ans << endl;
    }
}