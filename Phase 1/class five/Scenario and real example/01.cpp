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
    vector<pair<double, pair<int, int>>>v;
    for(int i=0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(dist(x,y), make_pair(x,y)));
    }
    sort(v.begin(), v.end());//lexicographical compare hobe
    for(auto [d,p] : v)
    {
        cout<<p.first<<' '<<p.second<<'\n';
    }
}
