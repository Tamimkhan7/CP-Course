#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
    int b[4][5][6]; //3D//basically row, column and hight to be indicated

    string s[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << s[i] + "!" << '\n'; // append "!" to each string
    }
    return 0;
}
