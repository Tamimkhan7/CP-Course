#include<bits/stdc++.h>
using namespace std;

bool compare(vector<int> a, vector<int> b)   // check manually if a < b
{
    int n = a.size(), m = b.size();

    for (int i = 0; i < min(n, m); i++)
    {
        if (a[i] < b[i])
        {
            return true;
        }
        else if (a[i] > b[i])
        {
            return false;
        }
    }
    return n < m;
}

int main()
{
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    cout << boolalpha << (a == b) << endl; // Output: true

    a = {1, 2, 3};
    b = {1, 2, 4};
    cout << boolalpha << (a < b) << endl; // Output: true

    a = {1, 2, 3};
    b = {1, 2, 3, 4};
    cout << boolalpha << compare(a, b) << endl; // Output: true
    return 0;
}
