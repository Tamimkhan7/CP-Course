#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v,x;
    if(n/2>=k)
    {
        for(ll i=1; i<=n; i+=2)
        {
            v.push_back(i);
        }
    }
    else
    {
        for(ll i=2; i<=n; i+=2)
        {
            x.push_back(i);
        }
    }

    if(n%2==0)
    {
        if(n/2>=k)
            cout<<v[k-1]<<endl;
        else
            cout<<x[(k-(n/2))-1]<<endl;
    }
    else
    {
        if((n/2)+1>=k)cout<<v[k-1]<<endl;
        else cout<<x[(k-(n/2+1))-1]<<endl;
    }



}
