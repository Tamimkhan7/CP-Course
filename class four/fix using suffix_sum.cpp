#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    int sx[n+2];
    for (int i=1; i<=n; i++)cin>>a[i];

    sx[n+1]=0;
    for(int i=n; i>=1;  i--)
    {
        sx[i] = sx[i+1]+a[i];
        cout<<sx[i]<<" ";
    }
    ll ans =0;
    for(int i=1; i<=n;  i++)
    {
        ll sum =1LL* a[i]*sx[i+1];
        ans += sum;
    }
    cout<<ans<<'\n';
}
