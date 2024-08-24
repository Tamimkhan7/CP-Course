#include <bits/stdc++.h>
using namespace std;
// map always sorted and unique thake key onujayi does not value onujayi

void print(map<int, int> mp)
{
    for (auto x : mp)
        cout << x.first << ' ' << x.second << '\n';
}
int main()
{
    map<int, int> mp;
    mp[1] = 3;
    mp[2] = 10;
    mp[3] = 17;

    // aivabe khojle kono extra value insert hobe na,, but jodi key diye khuji tahole value extra insert hoye jabe
    if (mp.find(3) != mp.end())
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';

    if (mp[10] != 0)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
    print(mp);

    /* 1 3
 2 10
 3 17
 10 0*/
    // extra key ar value cole asce tai ignore kora better,, tai find function diye khujle valo hy oi key ar value ta ace kina
}
