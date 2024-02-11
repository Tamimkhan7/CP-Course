#include <bits/stdc++.h>
using namespace std;
void swap1(int a, int b) // call by value
{
    int temp = a;
    a = b;
    b = temp;
}

void swap2(int *a, int *b) // call by pointer
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap3(int &a, int &b) // call by references
{
    int temp = a;
    a = b;
    b = temp;
}
void mull(int *a, int *b)
{
    cout << &a << '\n';
    cout << *a << " " << *b << '\n';
}
int main()
{
    int n, m;
    cin >> n >> m;
    cout << &n << '\n';
    mull(&n, &m);
    swap1(n, m);
    cout << n << " " << m << '\n'; // value will be no change
    swap2(&n, &m);
    cout << n << " " << m << '\n';
    swap3(n, m);
    cout << n << " " << m << '\n';
}
