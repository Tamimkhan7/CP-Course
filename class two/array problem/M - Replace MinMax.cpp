#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int find_mini_number = 1e9, find_mini_position = -1;
    int find_maxi_number = -1e9, find_maxi_position = -1;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < find_mini_number)
        {
            // find minimum number and their position
            find_mini_number = a[i];
            find_mini_position = i;
        }
        if (a[i] > find_maxi_number)
        {
            // find maximum number and their position
            find_maxi_number = a[i];
            find_maxi_position = i;
        }
    }
    swap(a[find_maxi_position], a[find_mini_position]);
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
}