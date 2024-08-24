#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    int ans=0;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            ans += (n/i==i)?1:2;
        }
    }
    cout<<ans<<endl;
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
