#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int int long long
const int N = 100;
int memo[N];
bool is_computed[N];
int fibo(int n)
{
    if (n == 1 || n == 0)
        return n;
    // basically is it before true i found then i will return this memorized value
    if (is_computed[n]) // basically ageii jodi ami aita kaj kore thaki oita just use korbo
        return memo[n];
    memo[n] = fibo(n - 1) + fibo(n - 2);
    is_computed[n] = true;
    return memo[n];
}
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    cout << fibo(n) << '\n';
    return 0;
}