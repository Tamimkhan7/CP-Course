#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int len_a = a.size();
    int len_b = b.size();
    cout << len_a << " " << len_b << endl;
    cout << a + b << endl;
    string a_first_letter, b_first_letter;
    int len = min(len_a, len_b);

    a_first_letter = a[0];
    b_first_letter = b[0];

    cout << b_first_letter;
    for (int i = 1; i < len_a; i++)
    {
        cout << a[i];
    }
    cout << " ";
    cout << a_first_letter;
    for (int i = 1; i < len_b; i++)
    {
        cout << b[i];
    }
    cout << endl;
}