#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll memo[100];
ll power_of_two(ll n)
{
    if (n <= 1)
        return 1;
    if (memo[n] != -1)
    {
        return memo[n];
    }
    memo[n] = power_of_two(n - 1) + power_of_two(n - 1);
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
    cout << power_of_two(n);
}