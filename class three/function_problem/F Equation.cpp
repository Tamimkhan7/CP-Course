#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x,n;
    cin>>x>>n;
    long long res, ans=0;
    for(int i=0; i<=n; i+=2)
    {
        if(i==0)
        {
            res = pow(x,i);
            res -=1;
            ans +=res;
        }
        else
        {
            res = pow(x,i);
            ans +=res;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    solve();
}
