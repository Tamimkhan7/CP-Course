#include <bits/stdc++.h>
using namespace std;
bool odd_even(int n)
{
    if (n & 1) // value ke and korteci 1 dara tahole amar last digit ta peye jabo
    {
        return false;
    }
    else
        return true;
}
int main()
{
    int n;
    cin >> n;
    cout << odd_even(n) << endl; // one means even ar odd zero means odd value
}