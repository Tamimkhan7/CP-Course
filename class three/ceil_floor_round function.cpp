#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << ceil((double)a / b) << endl; // using ceil function.. ceil mainly work value maximize kora
    // jodi value gula integer hoy tahole typecast na kore oh value gula ceil function a neoya jay
    cout << (a + b - 1) / b << endl; // value ta typecast cara ceil a cole gelo

    // floor function using
    cout << floor(a / b) << endl; // using floor function...floor function mainly work value minimize kora
    cout << (a / b) << endl;      // don't use floor how to find the floor value don't using floor function

    // using round function usign ..
    cout << round((double)a / b) << endl; // using round function, how to find the round value if given two integer value
    return 0;
}