#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int sum = 0;
    for (int i = 0, j = 0; i < n, j < n; i++, j++)
    {
        // cout << a[i][j] << " ";
        sum += a[i][j];
    }
    int sum2 = 0;
    for (int i = 0, j = n - 1; i < n, j >= 0; i++, j--)
    {
        sum2 += a[i][j];
    }

    cout << abs(sum - sum2) << endl;
}
