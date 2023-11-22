#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int l, r;
    cin>>l>>r;
    if(l*2>r)
        cout<<-1<<" "<<-1<<'\n';
    else cout<<l<<" "<<l*2<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

