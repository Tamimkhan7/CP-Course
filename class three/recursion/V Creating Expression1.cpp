#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(int a[], int n, int w)
{

    if(n==n)
    {
        int flag=0;
        for(int mask =0; mask<(1<<n); mask++)
        {
            ll ans=0;
            for(int j=0; j<n; j++)
            {
                if(mask & (1<<j))
                {
                    ans += a[j];
                    if(ans==w)
                    {
                        flag++;
                        return;
                    }
                    else if(ans>w)ans-=a[j];
                }
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return;
    }
    solve(a,n-1,w);
}
int main()
{
    int n,w;
    cin>>n>>w;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    solve(a,n,w);
}
