#include <bits/stdc++.h>
using namespace std;
int main()
{
    // amake jodi bole kth bit last digit ta ber koro ba last digit ki off naki ta ber kro tahole kivabe korbo
    int x = 8;
    int k = 3;
    cout << ((x >> k) & 1) << endl; // tahole ami x digit ta ke k th bar right shift korbo then 1 dara and korbo tahole ami last digit ta peye jabo
    // like 5=0101, k=2, that means amake two bar right shift korte hobe
    // value value ta darabe 0001- tahle amar last digit holo 1
}