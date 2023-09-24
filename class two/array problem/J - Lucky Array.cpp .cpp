#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int fre = 0;
    sort(a, a + n);
    int mini = a[0];
    for (int i = 0; i < n; i++)
    {
        if (mini == a[i])
            fre++;
    }
    if (fre % 2 == 0)
        cout << "Unlucky" << endl;
    else
        cout << "Lucky" << endl;
}