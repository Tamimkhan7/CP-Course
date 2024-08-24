#include<bits/stdc++.h>
using namespace std;

int main()
{
    size_t x = sizeof(int);
    cout << x << endl; // Output: 4
    int y = sizeof(char);
    cout << y << endl; // Output: 1
    cout << sizeof(float)<< endl; // Output: 4
    cout << sizeof(double)<< endl; // Output: 8
    cout << sizeof(long long)<< endl; // Output: 8

    // Size of Arrays
    int a[] = {10, 20, 30, 40, 50};
    cout << sizeof(a) << endl; // Output: 20
    cout << sizeof(a) / sizeof(int)<< endl; // Output: 5 (= number of elements in a)

    char c[] = "Hello";
    cout << sizeof(c) << endl; // Output: 6

    return 0;
}
