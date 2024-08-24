#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{1,2,8,9,6,3};

    auto it = find(v.begin(), v.end(),3);//this is return iterator index not value
    // for(auto x : v)cout<<x<<' ';
    if(it == v.end())cout<<"Not found"<<'\n';
    else cout<<it-v.begin()<<'\n';
}
