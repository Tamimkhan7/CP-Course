#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<int>>vx;
    for(int i=0; i<n; i++)
    {
        int x,y,z,u,v;
        cin>>x>>y>>z>>u>>v;
        vx.push_back({x,y,z,u,v});
    }
    sort(vx.begin(), vx.end());//lexicographically compare hobe
    for(auto vc : vx)
    {
        cout<<vc[0]<<' '<<vc[1]<<' '<<vc[2]<<' '<<vc[3]<<' '<<vc[4]<<'\n';
    }
}
