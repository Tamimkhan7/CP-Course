
//problem a[i]*a[i+1]

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    int pre_sum[n+2];//one index ar jonno n=2 neoya lagce but 0 index ar jonno n+1 nile ait hoto
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    //used prefix sum formula
    pre_sum[n+1]=0;
    for(int i=n; i>=1;  i--)
    {
        pre_sum[i] = a[i]+pre_sum[i+1];
    }

    int ans=0;
    for(int i=1; i<=n; i++)
    {
        ans += a[i]*pre_sum[i+1];
        cout<<a[i]<<" "<<pre_sum[i+1]<<endl;
    }
    cout<<ans<<'\n';

}
