#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    ll ans=0;
    for(int j=1; j<=n; j++)
    {
        int x = j;
        ll sum=0;
        for(int i=1; i*i<=x; i++)
        {
            if(x%i==0)
            {
                sum += (x/i==i)?1:2;
            }
        }
        ans +=((sum*j)%mod);
    }
    cout<<(ans%mod)<<endl;
}

int main()
{
    solve();
}
