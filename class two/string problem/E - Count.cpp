#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, ss;
    cin >> s;
    int len = s.size();
    int ans = 0;
    for (int i = 0; i < len; i++)
    {
        ss = s[i];
        ans += stoi(ss);
    }
    cout << ans << endl;ccccccccccccc
}