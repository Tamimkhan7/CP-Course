#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
        //akbar output dey,,,, ar por 1 second wait kore next bar output ar jonno//using this formula
        this_thread::sleep_for(chrono::seconds(1)); // sleep for 1 second
    }
    return 0;
}
