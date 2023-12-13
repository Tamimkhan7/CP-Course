#include <bits/stdc++.h>
using namespace std;
void print(map<int, string>mp)
{
    for(auto x:mp)cout<<x.first<<' '<<x.second<<'\n';

}
int main()
{
    map<int, string>mp;
    mp.insert({1, "Tamim"});
    mp[2]="Hannan";
    mp[3]="Mannan";
    mp[4]="sahin";
    mp[5]="mahabub";
    print(mp);
}
