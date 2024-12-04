#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bool ok = false;
    int num, pos;
    cin >> num;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            ok = true;
            pos = i;
            break;
        }
    }
    if (!ok)
        cout << "Element not found" << endl;
    else
        cout << "Element found at position : " << pos << endl;
}