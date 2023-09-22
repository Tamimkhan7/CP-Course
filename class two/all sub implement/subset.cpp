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
    for (int i = 0; i < (1 << n); i++)
    {
        // ar aita holo value ta n tom bar colbe
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                // like i=0 and j=0// tahole 1 value ta j bar left shift holo
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}
// pore bujbo thanda mathay