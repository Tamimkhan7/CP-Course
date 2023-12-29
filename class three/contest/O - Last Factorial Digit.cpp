#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    ll fact=1;
    for(int i=1; i<=n; i++)
    {
        fact=(fact*i)%mod;
    }
    cout<<fact%10<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
