#include <bits/stdc++.h>
using namespace std;
int print_bits(int x, int k)
{
    return ((x >> k) & 1); //>>aita right shift
}
// all on bits check
void print_on_bits(int x)
{
    for (int k = 0; k <= 32; k++) // 32th no bits holo sing operator
    {
        if (print_bits(x, k)) // ar kth bar amra right shift korteci
            cout << k << " "; // value ta print korteci jei sokol index ar value on oi sokol index print korteci
    }
    cout << endl;
}
// off bits check
void print_off_bits(int x)
{
    for (int k = 0; k < 32; k++)
    {
        if (!print_bits(x, k))
            cout << k << " ";
    }
    cout << endl;
}
int main()
{
    int x;
    cin >> x;
    print_on_bits(x); // like x=11, tahole holo - 000001010 total 32 bits, because amra int data type niyeci
    print_off_bits(x);
}