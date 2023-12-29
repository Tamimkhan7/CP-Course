#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    int ans = 0;
    for (auto [x, y] : mp)
    {
        ans += (n - y) * y;
        n -= y;
    }
    cout << ans << '\n';
}
