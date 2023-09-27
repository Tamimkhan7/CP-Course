#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '\\') //'\' use means holo newline print, '\\' use means compare the with string if this symbole stay in my taken string then break my string,
        {
            break;
        }
        else
            cout << s[i];
    }
    cout << endl;
}