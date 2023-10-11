#include <bits/stdc++.h>
using namespace std;
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
    // primary diagonal
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += ar[i][i];
    }
    // secondary diagonal
    int ans2 = 0;
    for (int i = 0; i < n; i++)
    {
        ans2 += ar[i][n - (i + 1)]; // mane holo ami n ar value take ak kore komiye dicii diye row column ar index ar value count korteci
    }
    cout << abs(ans - ans2) << endl;
}