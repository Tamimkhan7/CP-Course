#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // l left shift holo ami ar value ke n bar left a niteci like n=3 hoy tahole bola jay, 1 hoye darabe
    //  1 ar binary form - 0001, 1 bar left shift nile hobe = 0010 that's the decimal value -2, arekbar left shift hole hobe = 01000 that's the decimal number 4 so on.......
    // 1 ar value ke nth bar left shift korle, 2^n pawa jay, ja 2 ar power
    // like n=3 hobe i ar value hobe 8
    for (int i = 0; i < (1 << n); i++) // that's means 1 value ta n tom bar left shift hobe if n=5 hoy then ans hobe 16, tahole i loop use hobe 16 time
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j)) // jodi 1 time ami akta value on pai, tahole bujbo je value ta ace
            {
                // cout << i << " " << j << endl;
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}
//   cout << i << " " << j << endl;
/**
1 0

   2 1

   3 0 3 1

   4 2

   5 0 5 2

   6 1 6 2

   7 0 7 1 7 2*/