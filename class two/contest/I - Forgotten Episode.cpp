#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n - 1; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++)
    {
        int res = v[i + 1] - v[i];
        if (res > 1)
        {
            cout << v[i] + 1 << endl;
            return 0;
        }
    }
    cout << n << endl;
}