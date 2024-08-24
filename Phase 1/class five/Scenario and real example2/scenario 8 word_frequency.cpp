#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
int main()
{
    faster;
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    map<string, int> mp;
    // word ta key hisabe thaklo ar occurrences ta value hisabe thaklo
    while (ss >> word)
    {
        // akta word koybar ace seita count korteci
        mp[word]++; // map always lexicographically order thake
    }
    for (auto x : mp)
    {
        cout << x.first << ' ' << x.second << '\n';
    }
}