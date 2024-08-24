#include <bits/stdc++.h>
using namespace std;
//map always sorted and unique thake key onujayi does not value onujayi

void print(map<string, string>mp)
{
    for(auto x:mp)cout<<x.first<<' '<<x.second<<'\n';
}
int main()
{
    map<string, string>mp;
    mp.insert({"xooo", "Tamim"});
    mp["Tap"]="Mannan";
    mp["pex"]="Hannan";
    mp["radio"]="mahabub";
    mp["Phone"]="sahin";

    //key jevabe ace ,, abc modde jeita age asbe oi key ar value ta age print dibe then porer ta print dibe
//value gula key corresponding a print dicci not index ar corresponding a
    print(mp);
}
