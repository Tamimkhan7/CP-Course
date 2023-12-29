#include <bits/stdc++.h>
using namespace std;
int main()
{
    double num = 103.1415926;
    //fixed setprecision holo basically point ar por number count korbe age kono number count korbe na
    cout << fixed << setprecision(3) << num << '\n'; // 103.142/
    cout << fixed << setprecision(5) << num << '\n'; // 103.14159
    cout << fixed << setprecision(10) << num << '\n'; // 103.1415926000 (notice the trailing zeros)

    cout << setprecision(15) << num << '\n'; // 103.1415926 (no trailing zeros)
}
//tai always fixed ar setprecision use kora,,,,better
