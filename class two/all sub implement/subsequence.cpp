#include <bits/stdc++.h>
using namespace std;
unordered_set<string> st;
void subsequence(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = s.size(); j > i; j--)
        {
            string sub_str = s.substr(i, j);
            st.insert(sub_str); // all subset are include here
                                // like my first subset holo = abcd, size of the subset =4
            for (int k = 1; k < sub_str.size(); k++)
            {
                string sb = sub_str;      // subset ke sb te nilam
                sb.erase(sb.begin() + k); // means kore je ami jei index ta indicate korci oita bad diye dibo
                subsequence(sb);
            }
        }
    }
}
int main()
{
    string s;
    cin >> s;
    subsequence(s);
    for (auto i : st)
        cout << i << " ";
    cout << endl;
}