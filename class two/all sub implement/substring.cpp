#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;           // like my substring is = abcdefg
    int len = s.size(); // substring ar subarray holo same//akhn ai formula use kora hoy
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << s[k] << " ";
            }
            cout << endl;
        }
    }
}
// this program time complexity about n^3
