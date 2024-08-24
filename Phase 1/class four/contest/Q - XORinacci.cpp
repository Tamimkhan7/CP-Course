#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int a,b;
ll solve(ll n)
{
    if(n==0)return a;
    if(n==1)return b;
    return solve(n-1)^solve(n-2);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>a>>b;
        cin>>n;
        if(n%3>=2) cout<< (a^b)<<endl;
        else if(n%3==1)cout<<b<<'\n';
        else cout<<a<<'\n';
    }
}

