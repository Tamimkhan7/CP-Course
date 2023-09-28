#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, p;
    cin >> s;
    int len = s.size();
    sort(s.begin(), s.end());
    vector<string> ss;
    vector<int> v;
    int ans = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == s[i + 1])
        {
            ans++;
        }
        else
        {
            ans++;
            p = s[i];
            ss.push_back(p);
            v.push_back(ans);
            ans = 0;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << ss[i] << " : " << v[i] << endl;
    }
}