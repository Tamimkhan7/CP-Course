#include <bits/stdc++.h>
using namespace std;
char s[1000];
int main()
{
    int n;
    // if we dont use getchar or ignore function tahole amader function proper kaj korbe na
    cin >> n;
    // aita korle hy je akta input neoyar por karcor ta next line theke input neoyar try kore ate kono problme kore na
    char ch = getchar(); // that is working no problem in the program
    // cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cin.getline(s, 100); // that's working fully in the program
        cout << s << endl;
    }
}