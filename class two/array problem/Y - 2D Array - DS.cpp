#include <bits/stdc++.h>
using namespace std;
const int N = 6;
void solve(int a[N][N])
{
    int ans = 0;
    for (int i = 2; i < N; i++)
    {
        for (int j = 2; j < N; j++)
        {
            cout << i << " " << j << endl;
            cout << a[i][j] << " " << endl;
            cout << ans << " " << endl;
            ans = 0;

            ans += a[i][j];
            ans += a[i][j - 1];
            ans += a[i][j + 1];
            ans += a[i - 1][j - 1];
            ans += a[i - 1][j];
            ans += a[i - 1][j + 1];
            ans += a[i + 1][j - 1];
            ans += a[i + 1][j];
            ans += a[i + 1][j + 1];
        }
        cout << endl;
    }
}
int main()
{
    int a[N][N];
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> a[i][j];
        }
    }
    solve(a);
}
// thanda mathay korte hobe