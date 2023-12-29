#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int n, k;
    cin >> n >> k;
    // Create a bitmask with the last k bits set to 0
    unsigned int bitmask = (1 << k) - 1; // like k-1, then value ase = 010 aitake jodi 1 dara divisal kori then asbe, 01
    // Reset the last k bits in n
    n = n & ~bitmask; // bitmask ar value ta jodi not kore dei tahole daray 10 ja ar value and jodi n ar value sathe bitmask ar value ta and kori thole amader result peye jabo
    cout << n << endl;

    return 0;
}
