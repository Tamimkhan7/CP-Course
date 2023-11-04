#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x,y,n;
    cin>>x>>y>>n;
    int div = n-y;
    int mod = div%x;
    if(div%x==y)cout<<div<<endl;
    else
    {
        int l=y-mod;
        div+=l;
        if(div%x==y)cout<<div<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
