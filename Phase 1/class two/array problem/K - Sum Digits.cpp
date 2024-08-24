#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s, ss;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        ss = s[i];
        int p = stoi(ss);
        sum += p;
    }
    cout << sum << endl;
}