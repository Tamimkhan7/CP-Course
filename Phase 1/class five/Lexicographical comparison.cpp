#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a = "abc";
    string b = "abd";
    cout << boolalpha << (a < b) << endl; // Output: true

    a = "abc";
    b = "abc";
    cout << boolalpha << (a == b) << endl; // Output: true

    a = "abc";
    b = "abcd";
    cout << boolalpha << (a < b) << endl; // Output: true

    a = "d";
    b = "abc";
    cout << boolalpha << (a > b) << endl; // Output: true

    return 0;
}
