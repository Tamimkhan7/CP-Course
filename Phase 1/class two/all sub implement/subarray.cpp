#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        // this loop our program increment part, basically main part of your taken program
        for (int j = i; j < n; j++)
        {
            // this loop using taken our value and print them, that's the use in the loop
            for (int k = i; k <= j; k++)
            {
                // all subarray are there
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}