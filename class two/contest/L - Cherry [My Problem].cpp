#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll maxi_value = 0, maxi;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                maxi = a[i] * a[j];
                // cout << maxi << endl;
                maxi_value = max(maxi_value, maxi);
            }
        }
        cout << maxi_value << endl;
    }
}
// hoy na pore korbo