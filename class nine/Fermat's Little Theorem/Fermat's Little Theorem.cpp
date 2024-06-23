#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
// Let p be a prime which does not divide the integer a, then ap - 1 ≡ 1(mod p).
// Let p be a prime and a any integer, then ap ≡ a(mod p).
// jei gular last a 1 pawa jay oi gula must be prime digit
void print(int p)
{
    cout << p << " => ";
    int x = 2, curr = x % p;
    // print x ^ 1, x ^ 2, x ^ 3, x ^ 4......x ^ p - 1 mod p
    // x^p-1 == 1  %mod p tahole aita prime and x dara p ke  divided kora jabe na
    for (int i = 1; i < p; i++)
    {
        cout << curr << ' ';
        curr = 1LL * curr * x % p;
    }
    cout << '\n';
}
int32_t main()
{
    MTK;

    for (int i = 3; i <= 100; i++)
        print(i);

    return 0;
}