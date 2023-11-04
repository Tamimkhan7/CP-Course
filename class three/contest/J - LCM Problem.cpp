#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int l,r;
    cin>>l>>r;
    if(l*2>r)cout<<-1<<" "<<-1<<endl;
    else cout<<l<<" "<< l*2<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
