#include <bits/stdc++.h>
using namespace std;

// A function with default arguments,
// it can be called with
// 2 arguments or 3 arguments or 4 arguments.

// default argument holo, ami function ar modde value assign kore rakhbo jodi ami call korar somoy
// jodi kono value pathai tahole se oi value ta niye nibe ar jodi ami value na pathai tar jonno tahole
// se tar default value ta niye nibe

int sum(int x, int y, int z = 2, int w = 5) // assigning default values to z,w as 0
{
    return (x + y + z + w);
}

// Driver Code
int main()
{
    // Statement 1
    cout << sum(10, 15) << endl;

    // Statement 2
    cout << sum(10, 15, 25) << endl;

    // Statement 3
    cout << sum(10, 15, 25, 30) << endl;
    return 0;
}
