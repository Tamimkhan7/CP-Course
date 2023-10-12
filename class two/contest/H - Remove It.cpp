#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    int v[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
    {
        if (v[i] != x)
            cout << v[i] << " ";
    }
    cout << endl;
}