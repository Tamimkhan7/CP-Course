#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b;
    cin>>a>>b;

    if(a%b==0)
    {
        cout<<0<<endl;
    }
    else
    {
        int res = a%b;
        cout<<b-res<<endl;
    }

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
