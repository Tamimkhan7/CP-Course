#include <bits/stdc++.h>
using namespace std;
int maximum_possible_number(int n, int a[])
{
    int ans = 0, ct = 0;
    while (1)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                ans++;
            }
        }
        if (ans == n)
        {
            ct++;
            for (int i = 0; i < n; i++)
            {
                a[i] = a[i] / 2;
            }
            ans = 0;
        }
        else
            break;
    }
    return ct;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << maximum_possible_number(n, a) << endl;
}