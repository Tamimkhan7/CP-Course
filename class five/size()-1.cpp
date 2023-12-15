#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> u = {1, 2, 3, 4, 5};
    cout << u.size() << endl; // Output: 5
    cout << u.size() - 1 << endl; // Output: 4

    vector<int> v;
    cout << v.size() << endl; // Output: 0
    cout << v.size() - 1 << endl; // Output: 18446744073709551615 (2^64 - 1)

    cout << (int) v.size() - 1 << endl; // Output: -1

    for (int i = 0; i < v.size() - 1; i++)   // This loop will run 2^64 - 1 times
    {

    }

    for (int i = 0; i < (int) v.size() - 1; i++)   // This loop will run 0 times as expected
    {

    }
    return 0;
}
