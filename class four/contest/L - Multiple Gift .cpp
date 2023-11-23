#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll x,y;
    cin>>x>>y;
    int ans=0;
    while(x<=y)
    {
        ans++;
        x*=2;
         cout<<x<<endl;
    }
    cout<<ans<<'\n';
}
