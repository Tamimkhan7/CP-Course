#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    ll ans=0, res=0,res2;
    for(int i=1; i<=n;i++)
    {
        res +=i;
        ans += pow(i, 2);
    }
    res2 = pow(res, 2)-ans;
    cout<<res2<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
