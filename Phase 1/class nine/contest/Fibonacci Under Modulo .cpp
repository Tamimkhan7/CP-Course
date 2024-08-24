#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9, mod = 998244353;
int fibo[N];

int main()
{
    int n;
    cin >> n;
    fibo[0] = 1;
    fibo[1] = 1;
    for (int i = 2; i <= n; i++)
        fibo[i] = (fibo[i - 1] + fibo[i - 2]) % mod;
    cout << fibo[n - 1] << '\n';
    return 0;
}