#include <bits/stdc++.h>
using namespace std;
#define mod 998244353

int fib(int n)
{
    int a = 0, b = 1, c, i;
    if (n == 0)
        return a % mod;
    for (i = 2; i <= n; i++)
    {
        c = (a + b) % mod;
        a = b;
        b = c;
    }
    return b % mod;
}


int main()
{
    int n;
    cin >> n;
    cout << fib(n) % mod << '\n';
    return 0;
}