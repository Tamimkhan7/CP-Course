#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout << &a[i] << '\n'; // jehetu array 4 byte tai array block gula 4 kore update hocce
    }
    // normally total array declear korle se tar first value ta indecate kore pointer ar jonno
    // size decleare kore value re indicate kora jay
    cout << '\n';
    int *ptr = a + 2; // array address na dile oh auto address hoye thake,//array always first index ke indicate kore
    cout << ptr << '\n';
    int *x = &a[0];
    cout << x << '\n';
    cout << &a[0] << '\n';
}
