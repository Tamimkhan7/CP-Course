#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10, b = 15;
    // gcd of two numbers
    cout << __gcd(a, b) << '\n'; // 5

    int x = 20;       // x = 00000000 00000000 00000000 00010100
    long long y = 30; // y = 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00011110
    // number of set bits
    cout << __builtin_popcount(x) << '\n'; // 2 //konta one ace oita count koreteci mane set bit
    cout << __builtin_popcount(x) << '\n';
    cout << __builtin_popcountll(y) << '\n'; // 4
    cout << __builtin_popcountll(y) << '\n'; // long long jonno just last a ll use kora lagbe

    // number of leading zeros
    cout << __builtin_clz(x) << '\n';   // 27 (clz -> count leading zeros)
    cout << __builtin_clz(x) << '\n';   // first one ar age koyta 0 ace oita count korteci
    cout << __builtin_clzll(y) << '\n'; // 59

    // number of trailing zeros
    cout << __builtin_ctz(x) << '\n';   // 2 (ctz -> count trailing zeros)
    cout << __builtin_ctz(x) << '\n';   // right side diye first one ar por koyta zero ace oita count korteci
    cout << __builtin_ctzll(y) << '\n'; // 1

    // index of the highest set bit (or most significant bit, MSB)
    cout << 31 - __builtin_clz(x) << '\n';   // 4
    cout << 31 - __builtin_clz(x) << '\n';   // first one last theke koy number ace oita count korteci,and aita zero indexing hoy
    cout << 63 - __builtin_clzll(y) << '\n'; // 4
    cout << __lg(x) << '\n';                 // 4
    cout << __lg(y) << '\n';                 // 4

    // index of the lowest set bit (or least significant bit, LSB)
    cout << __builtin_ffs(x) - 1 << '\n';   // 2 (ffs -> find first set, it returns 1-based index)
    cout << __builtin_ffsll(y) - 1 << '\n'; // 1
    cout << __builtin_ctz(x) << '\n';       // 2 (equal to index of the lowest set bit)

    return 0;
}
