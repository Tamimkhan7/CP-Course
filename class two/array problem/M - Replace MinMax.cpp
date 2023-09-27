#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + n);
    int mini = a[0];
    int maxi = a[n - 1];
    cout << mini << " " << maxi << " ";
    for (int i = 0; i < n; i++)
}