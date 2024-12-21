#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long
int sum(int n)
{
    if (n == 0)
        return n;
    // both are correct, use any format if we needed
    int ans = sum(n - 1);
    return n + ans;
    // return n + sum(n - 1);
}
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    cout << sum(n) << '\n';
    return 0;
}