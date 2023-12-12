#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(6);
    s.insert(5);
//set basically unique and sorte kore rakhbe value gulake
//joto gula unique value pabe oitai tar size sokha
    cout<<s.size()<<'\n';
//set a iterator use kora jay
    for(auto x : s)
    {
        cout<<x<<' ';
    }

}
