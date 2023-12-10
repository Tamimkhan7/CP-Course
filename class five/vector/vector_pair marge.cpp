#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>>v;
    v.push_back(make_pair(1,2));
    v.push_back(make_pair(3,4));
    v.push_back(make_pair(6,7));

    for(auto x : v)cout<<x.first<<' '<<x.second<<'\n';//auto jaygay oi data type oh use kora jay, jei data type use korte cacci
    cout<<'\n';

    for(auto it= v.begin(); it != v.end(); it++)
        cout<<(*it).first<<' '<<(*it).second<<'\n';
    cout<<'\n';

    //both are similar staff, both are working same way


    for(auto [x,y]: v)
    {
        //  [x,y]=v;//upore nice same staff
        // cout<<x.first<<' '<<x.second<<'\n';
        cout<<x<<' '<<y<<'\n';
        //cout<<'\n';
    }
}
