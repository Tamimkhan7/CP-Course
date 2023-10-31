#include <iostream>
using namespace std;

/*// Global variable declaration
int c = 12; // ai value ta kokhon change hobe na jokhn

void test();

int main()
{
    ++c;

    // Outputs 13
    cout << c << endl;
    test();
    // call the my function increase the value then show the increment output our console
    return 0;
}

void test()
{
    ++c;

    // Outputs 14
    cout << c;
}*/
// this is another example for better understand to the global variable
//  CPP program to illustrate
//  usage of global variables
#include <iostream>
using namespace std;

// global variable
int global = 5;

// global variable accessed from
// within a function
void display()
{
    cout << global << endl;
}

// main function
int main()
{
    display();

    // changing value of global
    // variable from main function
    global = 10;
    display();
}
