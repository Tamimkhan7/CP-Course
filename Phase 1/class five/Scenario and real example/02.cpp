#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<tuple<int,int,int,int,int>>vx;
    for(int i=0; i<n; i++)
    {
        int x,y, z,u,v;
        cin>>x>>y>>z>>u>>v;
        vx.push_back(make_tuple(x,y,z,u,v));
    }
    sort(vx.begin(), vx.end());//lexicographically compare hobe
    for(auto [x,y,z,u,v] : vx)
    {
        cout<<x<<' '<<y<<' '<<z<<' '<<u<<' '<<v<<'\n';
    }
}
