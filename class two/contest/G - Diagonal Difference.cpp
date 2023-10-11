#include <bits/stdc++.h>
using namespace std;
// void diagonalDiffenence(int ar[], int n)
// {

// }
int main()
{
    int n;
    cin >> n;
    int ar[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ar[i][j];
        }
    }
    // diagonalDiffenence(ar, n);

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <= i; j++)
        {
            ans += ar[i][j];
        }
    }
    int ans2 = 0;
    for (int i = 0, j = n - 1; i < n, j >= 0; i++, j--)
    {
        ans2 += ar[i][j];
    }
    int res = ans - ans2;
    cout << abs(res) << endl;
}