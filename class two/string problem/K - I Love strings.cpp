#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s, t;
        cin >> s >> t;
        int len_t = t.size();
        int len_s = s.size();
        int len = min(len_t, len_s);
        for (int i = 0; i < len; i++)
        {
            cout << s[i] << t[i];
        }
        if (len_t > len_s)
        {
            for (int i = len; i < len_t; i++)
            {
                cout << t[i];
            }
        }
        else if (len_s > len_t)
        {
            for (int i = len; i < len_s; i++)
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
}