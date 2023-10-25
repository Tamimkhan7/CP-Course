#include <bits/stdc++.h>
using namespace std;
int power_of_two_by_the_number(int x, int k)
{                  // 3 ke ami akbar left shift koreci
    return x << k; // mane holo ami x ar value ke k ghor left korteci, x ar powr korteci
}
// k<<x // means holo k ar value take x bar left shift korbo and sathe sathe 2 ar power hoye jabe
// ak kotha holoo, boro ta choto bar left shift korle 2 ar power hobe na
// ar choto ta boro value bar left shift korle 2 ar power hoye jabe
int power_of_two(int x)
{
    return x << 1; // power of 2
}
int main()
{
    int x = 3, k = 2;
    cout << power_of_two_by_the_number(x, k) << endl;
    cout << power_of_two(x) << endl;
}