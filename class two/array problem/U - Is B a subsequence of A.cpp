#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[j])
        {
            j++;
            i = i;
        }
        if (j == m)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}