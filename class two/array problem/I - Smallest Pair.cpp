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
        int a[n];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int k, c;
        int maxi = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                k = a[i] + a[j] + j - i;
                // cout << k << endl;
                if (k < maxi)
                {
                    c = k;
                    maxi = k;
                }
            }
        }
        cout << c << endl;
    }
}