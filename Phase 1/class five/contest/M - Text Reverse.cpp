#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
#define pb push_back
#define pop pop_back()
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    cin.ignore(); // first line input neowar por baki sob ignore kore//aita just string a getline use kora jonno hoy// tai tokhn cin.ignore nile ai kaj ta next ar jamela kore na
    while (t--)
    {
        string s;
        getline(cin, s);
        string word = ""; // initially string empty, ai vabe initially na korle string a akta garbaze value cole asbe, garbaze value ignore korar jonno aita kora best
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                reverse(all(word));
                cout << word;
                word.clear(); // word = ""; ai vabe oh kora jete pare
                cout << ' ';
            }
            else
            {
                word += s[i];
            }
        }
        reverse(all(word));
        cout << word;
        cout << '\n';
    }
}

// aita oh AC hoy but kicu somoy presentation error asbe, so sei jonno another way use kora better
//  string s;
//  getline(cin, s);
//  stringstream ss(s);
//  string word;
//  while (ss >> word)
//  {
//  reverse(word.begin(), word.end());
//  cout << word << ' ';
// }
// cout << '\n';