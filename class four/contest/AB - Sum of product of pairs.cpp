#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    ll total=0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        total+=a[i];
    }
    ll ans=0;
    for(int i=0; i<n-1; i++)
    {
        total -=a[i];
        ans += ((a[i]%mod)*(total%mod))%mod;
        ans %=mod;
    }
    cout<<ans<<'\n';
}



