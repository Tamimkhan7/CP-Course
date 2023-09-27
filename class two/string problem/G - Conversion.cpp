#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    char ss; // char diye ascii value convert korteci
    int len = s.size();
    // cout << len << endl;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == ',')
        {
            cout << " ";
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            ss = tolower(s[i]);
            cout << ss;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            ss = toupper(s[i]);
            cout << ss;
        }
    }
    cout << endl;
}