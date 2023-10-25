#include <bits/stdc++.h>
using namespace std;
// akta value ke kivabe 2 dara vag kora jay don't use * expression
int divided_by_two(int x)
{
    return (x >> 1); // right shift dile 2 dara divided hoye jabe value ta tobe value ta intger a asbe
}
int multiplication_by_two(int x)
{
    return x << 1; // left shift dile value 2 dara multiplication hoy 1 time korle
}
// left shift dile value bame jabe
// right shift dile value dane jabe

int main()
{
    int x = 7;

    cout << divided_by_two(x) << endl;

    cout << multiplication_by_two(x) << endl;
}