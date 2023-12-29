#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x = 0;
    for (int i = 0, j = n - 1; i < n, j >= 0; i++, j--)
    {
        // cout << a[i] << " " << a[j] << endl;

        if (a[i] == a[j])
            x++;
    }
    if (x == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}