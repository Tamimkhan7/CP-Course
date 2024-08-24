#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[7][7];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> a[i][j];
        }
    }
    int ans = -1e8;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            int sum = 0;
            sum += a[i][j];                                         // center
            sum += a[i - 1][j] + a[i - 1][j - 1] + a[i - 1][j + 1]; // top

            sum += a[i + 1][j] + a[i + 1][j - 1] + a[i + 1][j + 1]; // down
            ans = max(sum, ans);
        }
    }
    cout << ans << endl;
}
