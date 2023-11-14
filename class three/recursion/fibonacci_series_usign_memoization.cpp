#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll memo[40];
ll fibo(ll n)
{
    if (n == 1 || n==0)
        return n;
    // cout << memo[n] << " ";
    if (memo[n] != -1)
    {
        return memo[n];
    }
    memo[n] = fibo(n - 1) + fibo(n - 2);
    return memo[n];
}
int main()
{
    ll n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        memo[i] = -1;
    }
    cout << fibo(n);
}
