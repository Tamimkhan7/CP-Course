#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    cout << a[0] << ' ' << a[1] << '\n';
    int sz = a.size();
    for (int i = 0; i < sz; i++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';

    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    cout << '\n';
    v.pop_back();//deleted last element
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    cout << '\n';
}
