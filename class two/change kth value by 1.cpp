#include <bits/stdc++.h>
using namespace std;
// int set_kth_bit(int x, int k)
// {
//     return (x | (1 << k)); // 1 ke kth gor soraici then x ar value sathe or koreci
// } // tahole kth value ta change hoye jabe and kth bit ta on hoye jabe

int unset_kth_bit(int x, int k)
{
    return (x & (~(1 << k))); // trun off a kth bit in a number
    // kth position position a niye asci one ke then not kore dilam like 1=0 hoye gelo and value ta x ar sathe and korci,
    // kth bit ar value jai thakok na keno aita off hoye jabe
}
int toggle(int x, int k)
{ // toggle bolte bujay kth place jei bit ta ace oi bit ta duplicate kore deoya like 0 thakle 1 kora, 1 thakle 0 kora
    return (x ^ (1 << k));
}
int main()
{
    int x = 15, k = 2;
    // cout << set_kth_bit(x, k) << endl;

    // cout << unset_kth_bit(x, k) << endl;

    cout << toggle(x, k) << endl;
}