#include <bits/stdc++.h>
using namespace std;

// Function Definition: Addition of two integers
int add(int a, int b)
{
    return a + b;
}

// Function Definition: Addition of two doubles
double add(double a, double b)
{
    return a + b;
}

// Function Definition: Addition of three integers
int add(int a, int b, int c)
{
    return a + b + c;
}

// Function Definition: Multiplication of two integers with default value
int multiply(int a, int b = 2)
{
    return a * b;
}

int main()
{
    int result1 = add(2, 3);        // Function call to add two integers//funciton overloading hocce jehetu same name but paramenter different so ai function a overloading hocce
    double result2 = add(2.5, 3.7); // Function call to add two doubles//funciton overloading hocce jehetu same name but paramenter different so ai function a overloading hocce
    int result3 = add(2, 3, 4);     // Function call to add three integers//funciton overloading hocce jehetu same name but paramenter different so ai function a overloading hocce

    int result4 = multiply(5);    // Function call to multiply with default value
    int result5 = multiply(5, 3); // Function call to multiply without default value

    cout << "Result 1: " << result1 << '\n';
    cout << "Result 2: " << result2 << '\n';
    cout << "Result 3: " << result3 << '\n';
    cout << "Result 4: " << result4 << '\n';
    cout << "Result 5: " << result5 << '\n';

    return 0;
}