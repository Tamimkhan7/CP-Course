#include <bits/stdc++.h>
using namespace std;
int main()
{
    // this is subsequence array in the program
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int mask = 0; mask < 1 << n; mask++) // ai loop ta pay 2^n bar colbe ja exponential
    {
        // if mask 3 binary representation holo ---011
        for (int i = 0; i < n; i++)
        { // jar i=0, and i=1 bit condition true kore,,,, tai a[0]=1, a[1]=2 ai two ta value print korbe
            // cout << mask << " ";
            if ((mask >> i) & 1) // ami mask ar kon kon last bit ta 1 ace oi bit ta count korteci,, i left shift diye check koteci
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
}
