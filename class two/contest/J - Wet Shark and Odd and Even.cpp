#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    ll sum = 0;
    int minimum_odd_number = 1e9;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (v[i] % 2 == 1)
            minimum_odd_number = min(minimum_odd_number, v[i]);
    }
    if (sum % 2 == 0)
        cout << sum << endl;
    else
    {
        sum -= minimum_odd_number;
        cout << sum << endl;
    }
}