#include<bits/stdc++.h>
using namespace std;

void add1(int *a)   // pointer to the first element of the array
{
    for (int i = 0; i < 5; i++)
    {
        a[i]++; // incrementing the value at the memory location pointed by 'a + i'
        // same as *(a + i) = *(a + i) + 1
    }
}

void add2(int a[5])   // same as 'int *a', it basically decays into a pointer to its first element
{
    for (int i = 0; i < 5; i++)
    {
        a[i]++;
    }
}

void add3(int a[])   // same as 'int *a', it basically decays into a pointer to its first element
{
    for (int i = 0; i < 5; i++)
    {
        a[i]++;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a[] = {1, 2, 3, 4, 5};
    add1(a);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n'; // Output: 2 3 4 5 6

    add2(a);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n'; // Output: 3 4 5 6 7

    add3(a);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n'; // Output: 4 5 6 7 8

    return 0;
}
