#include <bits/stdc++.h>
using namespace std;
// map always sorted and unique thake key onujayi does not value onujayi

void print(map<int, string> mp)
{
    for (auto x : mp)
        cout << x.first << ' ' << x.second << '\n';
}
int main()
{
    map<int, string> mp;
    mp.insert({1, "Tamim"});
    mp[3] = "Mannan";
    mp[2] = "Hannan";
    mp[5] = "mahabub";
    mp[4] = "sahin";
    // find function diye key ar value ta khuja jay
    auto it = mp.find(4);
    cout << (*it).first << ' ' << (*it).second << '\n'
         << '\n';
    mp.erase(2); // key diye oh erase kora jay abar iterator diye oh erase kora jay
    print(mp);
}
