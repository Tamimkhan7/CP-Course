#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    int num = a[x][y];
    cout << num << endl;
    for (int i = x - 1; i <= x + 1; i++)
    {
        int c = 0;
        for (int j = y - 1; j <= y + 1; j++)
        {
            if (a[i][j] == num)
                c++;
            else
                c++;
        }
        cout << c << endl;
    }
}