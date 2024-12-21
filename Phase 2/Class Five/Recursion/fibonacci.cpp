#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long
int fibo(int n)
{
    if (n == 1 || n == 0)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    cout << fibo(n) << '\n';
    return 0;
}