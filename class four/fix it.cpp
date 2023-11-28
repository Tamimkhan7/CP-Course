
//problem a[i]*a[j]

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    int total_sum=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        total_sum +=a[i];
    }
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        ans += a[i]*total_sum;
    }
    cout<<ans<<'\n';

}
