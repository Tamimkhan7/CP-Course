#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mod = 1e9 + 7;
  int n, b;
    cin >> n >> b;
    long long res = 1;

    // Calculate n factorial
    for (int i = 1; i <= n; i++)
    {
        res = (res * i) % mod;
    }

    // Calculate (n factorial) to the power of b
    res = (1LL * pow(res, b)) % mod;

    cout << res << endl;
}
