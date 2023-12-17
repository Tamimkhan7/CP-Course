#include <bits/stdc++.h>
using namespace std;
double dist(int x, int y)
{
    return sqrt(x*x+y*y);
}
int main()
{
    int n;
    cin>>n;
    vector<tuple<double,int, int>>v;
    for(int i=0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_tuple(dist(x,y),x,y));
    }
    sort(v.begin(), v.end());//lexicographical compare hobe
    for(auto [d,a,b] : v)
    {
        cout<<a<<' '<<b<<'\n';
    }
}
