#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];

    for(auto x : v)cout<<x<<' ';//auto jaygay oi data type oh use kora jay, jei data type use korte cacci
    cout<<'\n';
    //such that to be value iterator one by one
    for(int y: v)cout<<y<<' ';
    //both are similar, working are same
}
