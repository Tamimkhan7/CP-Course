#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define ll int long long
const int m = 998244353;
int32_t main()
{
    MTK;
    ll n;
    cin >> n;
    cout << (n % m + m) % m << '\n'; // n value is negative that's why we use + m that the answer
    return 0;
}