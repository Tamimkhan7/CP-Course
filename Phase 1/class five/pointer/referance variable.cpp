#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    int num = 10;
    int &ref = num;                      // Initialization of a reference variable
    cout << ref << '\n';                 // Output: 10 (value of 'num')
    cout << &num << ' ' << &ref << '\n'; // Output: 0x16d10a7f4 0x16d10a7f4 (same address)

    ref += 5;                          // Increment reference variable by 5
    cout << num << ' ' << ref << '\n'; // Output: 15 15 (changes reflected in 'num' as well)

    num += 5;                          // Increment 'num' by 5
    cout << num << ' ' << ref << '\n'; // Output: 20 20 (changes reflected in 'ref' as well)
    return 0;
}