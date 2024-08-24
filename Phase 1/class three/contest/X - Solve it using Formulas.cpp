#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    ll ans, res,res2;
    ans =(1LL*n*(n+1))/2;
    ans*=ans;
    //cout<<ans<<endl;
    res = (1LL* n*(n+1)*(2*n+1))/6;
    //cout<<res<<endl;

    cout<<ans-res<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
