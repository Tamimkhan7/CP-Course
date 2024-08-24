#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,k;
    cin>>k>>n;
    int a[n+1];
    int px[n+1];
    for (int i=1; i<=n; i++)cin>>a[i];

    px[0]=0;
    for(int i=1; i<=n; i++)
    {
        px[i] = px[i-1]+a[i];
    }
    int ans =0,j=0;
    while(j<n)
    {
        for(int i=j+1; i<=n;  i++)
        {
            int rs = px[i]-px[j];
            if(rs%k==0)ans++;
            //cout<<rs<<" ";
        }
        //cout<<endl;
        j++;
    }
    cout<<ans<<'\n';
}
