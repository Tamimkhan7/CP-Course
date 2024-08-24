#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    int s[n+1], a[n+1];
    for(int i=n-k+1; i<=n; i++)cin>>s[i];
    if(k==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    for(int i=n-k+2; i<=n; i++)
    {
        a[i]=s[i]-s[i-1];
    }
    if(!is_sorted(a+n-k+2, a+n+1))
    {
        cout<<"NO"<<'\n';
        return;
    }
    if(s[n-k+1]>1LL*a[n-k+2]*(n-k+1))
    {
        cout<<"NO"<<'\n';
        return;
    }
    cout<<"YES"<<'\n';

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

