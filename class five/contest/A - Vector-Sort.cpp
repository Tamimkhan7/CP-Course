#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    // for (int i = 0; i < n; i++)
    //     cout << v[i] << " ";

    // print useing iterator
    for (auto x : v)
        cout << x << ' ';
    cout << '\n';
}
