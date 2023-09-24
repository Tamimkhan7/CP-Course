#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int mini = a[0];
    int k = -1;
    for (int i = 0; i < n; i++)
    {
        if (mini > a[i])
        {
            mini = a[i];
            k = i;
        }
    }
    if (k == -1)
        cout << mini << " " << 1 << endl;
    else
        cout << mini << " " << k + 1 << endl;
}