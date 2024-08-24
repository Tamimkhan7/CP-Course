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
    mp[3] = "Akash"; // tahole aita ager key ar value change kore reuse hobe
    print(mp);
    // jodi map ar kono akta key value print korte cai just oi map ar key ar number ta dile ans beriye asbe
    cout << mp[5] << '\n';
}
