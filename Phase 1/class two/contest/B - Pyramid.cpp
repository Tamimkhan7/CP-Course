#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int j = 1; j <= row; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
//time : O(n^2)
//space : O(1)//ami always ai 3ta variable nicci, so amar variable constant