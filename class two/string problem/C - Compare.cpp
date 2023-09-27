#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, ss;
    cin >> s >> ss;
    int len_s = s.size();
    int len_ss = ss.size();
    int len = min(len_s, len_ss);
    for (int i = 0; i < len; i++)
    {
        if (s[i] > ss[i])
        {
            cout << ss << endl;
            return 0;
        }
        else if (s[i] < ss[i])
        {
            cout << s << endl;
            return 0;
        }
    }
    if (len_s <= len_ss)
        cout << s << endl;
    else
        cout << ss << endl;
}