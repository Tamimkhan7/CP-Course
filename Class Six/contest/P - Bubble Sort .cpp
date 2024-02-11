#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
   
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                cnt++;
            }
        }
    }  
    cout << "Array is sorted in " << cnt << " swaps." << '\n';
    cout << "First Element: " << a[0] << '\n';
    cout << "Last Element: " << a[(sizeof(a) / sizeof(int)) - 1] << '\n';
}