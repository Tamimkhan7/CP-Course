#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    int ans=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]!=0)cout<<a[i]<<" ";
        else ans++;
    }
    for(int i=0; i<ans; i++)cout<<0<<" ";
    cout<<endl;

}
int main()
{
    solve();
}
