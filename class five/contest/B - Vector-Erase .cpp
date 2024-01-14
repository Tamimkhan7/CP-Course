#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    int x;
    cin >> x;
    v.erase(v.begin() + x);

    int a, b;
    cin >> a >> b;
    v.erase(v.begin() + a, v.begin() + b);

    cout << v.size()-1 << '\n';
    for (int i = 1; i < v.size(); i++)
        cout << v[i] << " ";
    cout << '\n';
}
