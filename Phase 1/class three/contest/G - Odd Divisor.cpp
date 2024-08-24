#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
 ll n;
    cin>>n;
    if(n&(n-1))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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
