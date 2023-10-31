#include <bits/stdc++.h>
using namespace std;

// Global variable declaration
int global_var = 10;

// Function that uses local variables
void yo()
{
    // Local variable declaration
    int local_var = 5;

    cout << "Local variable: " << local_var << '\n';   // print the local value is 5
    cout << "Global variable: " << global_var << '\n'; // print the global value is 5

    // Modifying the local variable
    local_var = 20;

    cout << "Modified local variable: " << local_var << '\n'; // print the modify local value is 15
}

int main()
{
    // Accessing the global variable
    cout << "Global variable: " << global_var << '\n'; // print the global value is 10

    // Modifying the global variable
    global_var = 15;

    cout << "Modified global variable: " << global_var << '\n'; // print the modify global value is 15

    // Calling the function that uses local variables
    yo();
    return 0;
}
// global value ke ami je kono jayga theke access korte parbo and oi value ke change kore update kore oh dite parbo
