#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void palindrom_check(int a[], int n,int i, int ans, int m)
{
    if(n==1)
    {
        int x = a[n];
        int y = a[i];
        if(x==y)ans++;
        if(ans==m)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return;
    }
    int x = a[n];
    int y = a[i];
    if(x==y)ans++;
  // cout<<x<<" "<<y<<endl;
    palindrom_check(a,n-1,i+1, ans,m);
}
int main()
{
    ll n;
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)cin>>a[i];
    int m =n,i=1, ans=0;
    palindrom_check(a, n, i,ans, m);

}
