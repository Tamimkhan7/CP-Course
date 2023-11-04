#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b;
    int x,res;
    cin>>a>>b;
    x = abs(a-b);
    res = x/10;
    if(x%10==0)cout<<res<<endl;
    else cout<<res+1<<endl;

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
