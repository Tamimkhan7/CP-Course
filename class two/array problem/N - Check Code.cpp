#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    if (s[a] != '-')
    {
        cout << "No" << endl;
        return 0;
    }

    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        if (i == a) // if a ar value ta i same hoy tahole continue korte hobe karon a ar value te amar - operator thakte pare, oita amar lagbe if ar jodi pai - operator tahole ami bolbo amar ans hobe no
            continue;
        if (!isdigit(s[i])) // isdigit aita akta stl-aitar kaj holo- akta string ar element digit kina seta check korta
        {                   // jodi ar kono - operator pai tahole bolte pari amar string ta condition true kortece na
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}