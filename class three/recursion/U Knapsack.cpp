#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(int a[], int b[], int n, int w, ll maxi)
{

    if(n==n)
    {
        for(int mask =0; mask<(1<<n); mask++)
        {
            ll ans=0, sum=0;
            for(int j=0; j<n; j++)
            {
                if(mask & (1<<j))
                {
                    sum += a[j];
                    ans += b[j];
                    if(sum<=w)
                    {
                        //cout<<sum<< " ";
                        //cout<<ans<<endl;
                        maxi = max(ans, maxi);
                    }
                }
            }
        }
        cout<<maxi<<endl;
        return;
    }
    solve(a,b,n-1,w, maxi);
}
int main()
{
    int n,w;
    cin>>n>>w;
    int a[n],b[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }
    ll maxi =-1;
    solve(a,b,n,w, maxi);
}
