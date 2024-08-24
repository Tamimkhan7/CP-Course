#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    //two ta way te print kora jay
    /* for(int i=0; i<n; i++)cout<<v[i]<<' ';
     cout<<'\n';*/
    //but best holo aita
    for(auto x : v)cout<<x<<' ';
    cout<<'\n';
}
