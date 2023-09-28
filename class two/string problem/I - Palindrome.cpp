#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, ss;
    cin >> s;
    int len = s.size();
    for (int i = len - 1; i >= 0; i--)
    {
        ss += s[i];
    }
    // cout << ss << endl;
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (ss[i] != s[i])
        {
            count++;
            break;
        }
    }
    if (count == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}