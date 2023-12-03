#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10];
    fill(a, a + 10, 5); // assign 5 to all elements of a
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << ' '; // all 5s
    }
    cout << '\n';
    return 0;
}
