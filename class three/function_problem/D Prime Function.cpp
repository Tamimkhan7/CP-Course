#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int flag =0;
    if(n==1)flag=1;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            flag =1;
            break;
        }
    }
    if(flag)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}
