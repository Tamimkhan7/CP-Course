#include <bits/stdc++.h>
using namespace std;
//map always sorted and unique thake key onujayi does not value onujayi

void print(map<int, string>mp)
{
    for(auto x:mp)cout<<x.first<<' '<<x.second<<'\n';
}
int main()
{
    map<int, string>mp;
    mp.insert({10, "Tamim"});
    mp[30]="Mannan";
    mp[20]="Hannan";
    mp[50]="mahabub";
    mp[40]="sahin";
//value gula key corresponding a print dicci not index ar corresponding a
    // print(mp);
    auto it = mp.lower_bound(20);//jodi thake tahole or first key ta dibe na thakbe or theke boro key ta dibe
    cout<<(*it).first<<' '<<(*it).second<<'\n';


    auto it = mp.upper_bound(20);//upper_bound maximize kore tar theke boro key ar value ta x> like that
    cout<<(*it).first<<' '<<(*it).second<<'\n';
}
